// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HTTP.h"
#include "Containers/UnrealString.h"
#include "CPP_HttpRequestHandler.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UNREAL_CARD_GAME_API UCPP_HttpRequestHandler : public UObject
{
	GENERATED_BODY()

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
public:
	UPROPERTY(BlueprintReadOnly)
		FString Message = "empty";
	UFUNCTION(BlueprintCallable)
		void DoSmth();
};
