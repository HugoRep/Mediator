// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventConstance.generated.h"

/**
 *
 */

UENUM()
enum class UEventConstance : uint8
{
	ATTACK		UMETA(DisplayName = "ATTACK"),
	STOP		UMETA(DisplayName = "STOP")
};
