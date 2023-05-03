// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CPP_BaseCard.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class UNREAL_CARD_GAME_API UCPP_BaseCard : public UObject
{
	GENERATED_BODY()
private:
	FString CardId;
	FString BaseName;
	int BaseCost;
	FString BaseColor;
	int BaseAttack;
	int BaseHealth;
	FString BaseTypes;
public:
	FString GetCardID();
	FString GetBaseName();
	int GetBaseCost();
	FString GetBaseColor();
	int GetBaseAttack();
	int GetBaseHealth();
	FString GetBaseTypes();
};
