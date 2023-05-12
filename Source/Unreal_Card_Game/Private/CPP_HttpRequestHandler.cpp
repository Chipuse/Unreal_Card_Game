// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_HttpRequestHandler.h"

void UCPP_HttpRequestHandler::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
	Message = Response->GetContentAsString();
}

void UCPP_HttpRequestHandler::DoSmth()
{
	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UCPP_HttpRequestHandler::OnResponseReceived);
	Request->SetURL("https://jsonplaceholder.typicode.com/posts/1");
	Request->SetVerb("GET");
	Request->ProcessRequest();
}
