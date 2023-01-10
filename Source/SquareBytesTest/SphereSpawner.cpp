// Fill out your copyright notice in the Description page of Project Settings.

#include "JsonParser.h"
#include "SphereSpawner.h"


//FStrProperty* StringProp = FindField(Object->GetClass(), )

// Sets default values
ASphereSpawner::ASphereSpawner()
{
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASphereSpawner::BeginPlay()
{
	Super::BeginPlay();
	SpawnObj();
	
	
}

// Called every frame
void ASphereSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASphereSpawner::SpawnObj()
{
	AJsonParser* Par = Cast<AJsonParser>(this->GetClass());

	for (int i = 0; i < 3; i++){
		FString XLoc = Par->Parser(i, "Pos_X");
		FString YLoc = Par->Parser(i, "Pos_Y");
		FString ZLoc = Par->Parser(i, "Pos_Z");

		float LocX = FCString::Atof(*XLoc);
		float LocY = FCString::Atof(*YLoc);
		float LocZ = FCString::Atof(*ZLoc);

		FString XSca = Par->Parser(i, "Scale_X");
		FString YSca = Par->Parser(i, "Scale_Y");
		FString ZSca = Par->Parser(i, "Scale_z");

		float ScaX = FCString::Atof(*XSca);
		float ScaY = FCString::Atof(*YSca);
		float ScaZ = FCString::Atof(*ZSca);

		if (i == 0) {
			LocObj1 = FVector(LocX, LocY, LocZ);
			ScaObj1 = FVector(ScaX, ScaY, ScaZ);
			const FRotator Rotation = GetActorRotation();
			GetWorld()->SpawnActor<AActor>(ActorToSpawn1, LocObj1, Rotation);
			Name1 = FString(Par->Parser(i, "Name"));
		}
		else if (i == 1) {
			LocObj2 = FVector(LocX, LocY, LocZ);
			ScaObj2 = FVector(ScaX, ScaY, ScaZ);
			const FRotator Rotation = GetActorRotation();
			GetWorld()->SpawnActor<AActor>(ActorToSpawn2, LocObj2, Rotation);
			Name2 = Par->Parser(i, "Name");
		}
		else {
			LocObj3 = FVector(LocX, LocY, LocZ);
			ScaObj3 = FVector(ScaX, ScaY, ScaZ);
			const FRotator Rotation = GetActorRotation();
			GetWorld()->SpawnActor<AActor>(ActorToSpawn3, LocObj3, Rotation);
			Name3 = Par->Parser(i, "Name");
		}
	}
}

