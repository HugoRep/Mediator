// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MediatorInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMediatorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MEDIATOR_API IMediatorInterface
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interact)
	void Mediator(const UEventConstance eventType);
};
