// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SquareBytesTestProjectile.h"
#include "SphereSpawner.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InfoWidget.generated.h"

/**
 * 
 */
UCLASS()
class SQUAREBYTESTEST_API UInfoWidget : public UUserWidget
{
	GENERATED_BODY()
private:
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* NameTextBlock;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* LocationTextBlock;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* ScaleTextBlock;

public:
	virtual void NativeConstruct() override;

	
};
