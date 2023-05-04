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
	UCPP_BaseCard();
	UFUNCTION(BlueprintCallable)
		void InitializeBaseCardFromData(FString InitCardId, FString InitBaseName, int InitBaseCost, FString InitBaseColor, int InitBaseAttack, int InitBaseHealth, FString InitBaseTypes);
	UFUNCTION(BlueprintCallable)
		FString GetCardID();
	UFUNCTION(BlueprintCallable)
		FString GetBaseName();
	UFUNCTION(BlueprintCallable)
		int GetBaseCost();
	UFUNCTION(BlueprintCallable)
		FString GetBaseColor();
	UFUNCTION(BlueprintCallable)
		int GetBaseAttack();
	UFUNCTION(BlueprintCallable)
		int GetBaseHealth();
	UFUNCTION(BlueprintCallable)
		FString GetBaseTypes();
};
