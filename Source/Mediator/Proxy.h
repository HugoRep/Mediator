// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MediatorInterface.h"
#include "Proxy.generated.h"

/**
 * 
 */
UCLASS()
class MEDIATOR_API UProxy : public UObject , public IMediatorInterface
{
	GENERATED_BODY()
private:
	static UProxy* SingletonInstance;

public:
	UProxy();
	static UProxy* GetInstance() {
		if (SingletonInstance == nullptr)
			SingletonInstance = NewObject<UProxy>();
		return SingletonInstance;
	};
	~UProxy()
	{
		Destory();
	}

	

	void Destory()
	{
		ObjectArray.Empty();
		UE_LOG(LogTemp, Warning, TEXT("Destory out %d"), ObjectArray.Num());
	}

	TArray<AActor*> ObjectArray;
	void onRegister(AActor* object)
	{
		ObjectArray.Add(object);
		UE_LOG(LogTemp, Warning, TEXT("ObjectArray Max:%d %d"), ObjectArray.Max() , ObjectArray.Num());
	}

	void sendNotitycation(FString EventType)
	{
		for (int ix = 0; ix < ObjectArray.Num(); ++ix)
		{
			IMediatorInterface::Execute_Mediator((UObject*)ObjectArray[ix] , *EventType);
		}		
	}
};