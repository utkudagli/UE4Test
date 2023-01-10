// Fill out your copyright notice in the Description page of Project Settings.

#include "JsonParser.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Components/TextBlock.h"
#include "SphereName2.h"

void USphereName2::NativeConstruct() {

	AJsonParser* Par = Cast<AJsonParser>(this->GetClass());
	FString Name = FString(Par->Parser(1, "Name"));
	GLog->Log(Name);

	if (NameDisplayerTextBlock) {
		NameDisplayerTextBlock->SetText(FText::FromString(Name));
	}

}