// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SphereName3.generated.h"

/**
 * 
 */
UCLASS()
class SQUAREBYTESTEST_API USphereName3 : public UUserWidget
{
	GENERATED_BODY()
	
private:
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* NameDisplayerTextBlock;

public:
	virtual void NativeConstruct() override;
};
