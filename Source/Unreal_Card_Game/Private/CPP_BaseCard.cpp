// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_BaseCard.h"

UCPP_BaseCard::UCPP_BaseCard()
{
    CardId = "";
    BaseName = "";
    BaseCost = 0;
    BaseColor = "";
    BaseAttack = 0;
    BaseHealth = 0;
    BaseTypes = "";
}

void UCPP_BaseCard::InitializeBaseCardFromData(FString InitCardId, FString InitBaseName, int InitBaseCost, FString InitBaseColor, int InitBaseAttack, int InitBaseHealth, FString InitBaseTypes)
{
    CardId = InitCardId;
    BaseName = InitBaseName;
    BaseCost = InitBaseCost;
    BaseColor = InitBaseColor;
    BaseAttack = InitBaseAttack;
    BaseHealth = InitBaseHealth;
    BaseTypes = InitBaseTypes;
}

FString UCPP_BaseCard::GetCardID()
{
    return CardId;
}

FString UCPP_BaseCard::GetBaseName()
{
    return BaseName;
}

int UCPP_BaseCard::GetBaseCost()
{
    return BaseCost;
}

FString UCPP_BaseCard::GetBaseColor()
{
    return BaseColor;
}

int UCPP_BaseCard::GetBaseAttack()
{
    return BaseAttack;
}

int UCPP_BaseCard::GetBaseHealth()
{
    return BaseHealth;
}

FString UCPP_BaseCard::GetBaseTypes()
{
    return BaseTypes;
}
