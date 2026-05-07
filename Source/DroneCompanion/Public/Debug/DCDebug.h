// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Cvars for debugging drone
 */

DECLARE_LOG_CATEGORY_EXTERN(DCLogDebug, Log, All);

namespace DCDebug
{
	extern TAutoConsoleVariable<int32> StateMachine;
	extern TAutoConsoleVariable<int32> Sensing;
	extern TAutoConsoleVariable<int32> Movement;
	extern TAutoConsoleVariable<int32> Avoidance;
	extern TAutoConsoleVariable<int32> Targeting;
	extern TAutoConsoleVariable<float> Duration;

	inline bool IsStateMachineEnabled() { return StateMachine.GetValueOnGameThread() == 1; }
	inline bool IsSensingEnabled() { return Sensing.GetValueOnGameThread() == 1; }
	inline bool IsMovementEnabled() { return Movement.GetValueOnGameThread() == 1; }
	inline bool IsAvoidanceEnabled() { return Avoidance.GetValueOnGameThread() == 1; }
	inline bool IsTargetingEnabled() { return Targeting.GetValueOnGameThread() == 1; }
	inline float DrawDuration() { return Duration.GetValueOnGameThread(); }
}
