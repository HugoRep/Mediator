// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MediatorInterface.h"
#include "Proxy.h"
#include "TestActor.generated.h"

UCLASS()
class MEDIATOR_API ATestActor : public AActor, public IMediatorInterface
{
	GENERATED_BODY()
	
public:	
	
	// Sets default values for this actor's properties
	ATestActor();
	~ATestActor();

	AActor* currentObj;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Mediator_Implementation(const UEventConstance EventType) override;
};
