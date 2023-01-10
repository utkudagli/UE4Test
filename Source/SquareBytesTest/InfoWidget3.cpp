// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonParser.h"
#include "SquareBytesTestProjectile.h"
#include "SphereSpawner.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Components/TextBlock.h"
#include "InfoWidget3.h"

void UInfoWidget3::NativeConstruct() {
	
	FVector LocObj1;
	FVector LocObj2;
	FVector LocObj3;

	FVector ScaObj1;
	FVector ScaObj2;
	FVector ScaObj3;

	//ASphereSpawner* Spawner = Cast<ASphereSpawner>(this->GetClass());
	AJsonParser* Par = Cast<AJsonParser>(this->GetClass());
	FString Name = FString(Par->Parser(2, "Name"));
	FString XLoc = Par->Parser(2, "Pos_X");
	FString YLoc = Par->Parser(2, "Pos_Y");
	FString ZLoc = Par->Parser(2, "Pos_Z");

	float LocX = FCString::Atof(*XLoc);
	float LocY = FCString::Atof(*YLoc);
	float LocZ = FCString::Atof(*ZLoc);

	FString XSca = Par->Parser(2, "Scale_X");
	FString YSca = Par->Parser(2, "Scale_Y");
	FString ZSca = Par->Parser(2, "Scale_z");

	float ScaX = FCString::Atof(*XSca);
	float ScaY = FCString::Atof(*YSca);
	float ScaZ = FCString::Atof(*ZSca);

	LocObj1 = FVector(LocX, LocY, LocZ);
	ScaObj1 = FVector(ScaX, ScaY, ScaZ);

	if (NameTextBlock && LocationTextBlock && ScaleTextBlock) {
		NameTextBlock->SetText(FText::FromString(Name));
		LocationTextBlock->SetText(FText::FromString(LocObj1.ToString()));
		ScaleTextBlock->SetText(FText::FromString(ScaObj1.ToString()));
	}
}

