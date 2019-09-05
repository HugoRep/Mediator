// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "EventConstant.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

ATestActor::~ATestActor()
{
	UE_LOG(LogTemp, Warning, TEXT("DeleteActor"));
	UProxy::GetInstance()->Destory();
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	UProxy::GetInstance()->onRegister( this);
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestActor::Mediator_Implementation(const FString& EventType)
{
	FString eType = EventType;

	if (EventType.Compare(*FString(EVENT_ATTACK)))
	{
		
	}
	else if (EventType.Compare(*FString(EVENT_CHECK)))
	{

	}
}

