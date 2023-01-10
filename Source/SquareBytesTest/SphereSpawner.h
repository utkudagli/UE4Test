// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SphereSpawner.generated.h"

UCLASS()
class SQUAREBYTESTEST_API ASphereSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASphereSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SpawnObj();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Name1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite )
		FString Name2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite )
		FString Name3;

	FVector LocObj1;
	FVector LocObj2;
	FVector LocObj3;

	FVector ScaObj1;
	FVector ScaObj2;
	FVector ScaObj3;

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"));
	TSubclassOf<AActor> ActorToSpawn1;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"));
	TSubclassOf<AActor> ActorToSpawn2;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"));
	TSubclassOf<AActor> ActorToSpawn3;



};
