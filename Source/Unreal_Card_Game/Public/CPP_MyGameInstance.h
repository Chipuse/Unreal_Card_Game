// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CPP_HttpRequestHandler.h"
#include "CPP_MyGameInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class UNREAL_CARD_GAME_API UCPP_MyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
		UCPP_HttpRequestHandler* HttpHandler;
	UPROPERTY(BlueprintReadWrite)
		float myFlaot = 0;
	UFUNCTION(BlueprintCallable)
		UCPP_HttpRequestHandler* GetHttpHandler();
};
