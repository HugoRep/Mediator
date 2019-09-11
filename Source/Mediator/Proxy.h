// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MediatorInterface.h"
#include "EventConstance.h"
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
			SingletonInstance->AddToRoot();
		return SingletonInstance;
	};
	~UProxy(){
		Destory();
	}

	void Destory(){
		ObjectArray.Empty();
	}

	TArray<AActor*> ObjectArray;
	void onRegister(AActor* object){
		ObjectArray.Emplace(object);
	}

	void sendNotitycation(UEventConstance EventType)
	{
		for (int ix = 0; ix < ObjectArray.Num(); ++ix)
		{
			IMediatorInterface::Execute_Mediator((UObject*)ObjectArray[ix] , EventType);
		}		
	}
};