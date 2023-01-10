// Fill out your copyright notice in the Description page of Project Settings.

#include "JsonParser.h"
#include "Sphere2.h"

// Sets default values
ASphere2::ASphere2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASphere2::BeginPlay()
{
	Super::BeginPlay();
	Super::BeginPlay();
	AJsonParser* Par = Cast<AJsonParser>(this->GetClass());
	FString XSca = Par->Parser(1, "Scale_X");
	FString YSca = Par->Parser(1, "Scale_Y");
	FString ZSca = Par->Parser(1, "Scale_z");

	float ScaX = FCString::Atof(*XSca);
	float ScaY = FCString::Atof(*YSca);
	float ScaZ = FCString::Atof(*ZSca);

	FVector ScaObj = FVector(ScaX, ScaY, ScaZ);

	SetActorScale3D(ScaObj);
	
}

// Called every frame
void ASphere2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

