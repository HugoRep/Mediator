// Fill out your copyright notice in the Description page of Project Settings.


#include "Proxy.h"

UProxy* UProxy::SingletonInstance = nullptr;
UProxy::UProxy()
{
	UE_LOG(LogTemp, Warning, TEXT("UProxy Create %d"), ObjectArray.Num());
	UE_LOG(LogTemp, Warning, TEXT("UProxy Create"));
}

