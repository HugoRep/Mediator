// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor003.h"
#include "Proxy.h"
#include "EventConstance.h"

// Sets default values
AMyActor003::AMyActor003()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyActor003::BeginPlay()
{
	Super::BeginPlay();
	UProxy::GetInstance()->onRegister(this);
	
}

// Called every frame
void AMyActor003::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyActor003::Mediator_Implementation(const UEventConstance eventType)
{
	switch (eventType)
	{
		case UEventConstance::ATTACK :
			
			break;

	default:
		break;
	}
}

