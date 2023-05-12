// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MyGameInstance.h"

UCPP_HttpRequestHandler* UCPP_MyGameInstance::GetHttpHandler()
{
	if (!HttpHandler)
		HttpHandler = NewObject<UCPP_HttpRequestHandler>();
	return HttpHandler;
}
