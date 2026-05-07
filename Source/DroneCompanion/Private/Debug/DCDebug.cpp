// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/Debug/DCDebug.h"

DEFINE_LOG_CATEGORY(DCLogDebug);

namespace DCDebug
{
	TAutoConsoleVariable<int32> StateMachine(
		TEXT("dc.Debug.StateMachine"),
		0,
		TEXT("Drone state machine: current state, time-in-state, transitions."),
		ECVF_Cheat);
	
	TAutoConsoleVariable<int32> Sensing(
		TEXT("dc.Debug.Sensing"),
		0,
		TEXT("Drone sensing: detection sphere, candidates, line-of-sight traces."),
		ECVF_Cheat);
	
	TAutoConsoleVariable<int32> Movement(
		TEXT("dc.Debug.Movement"),
		0,
		TEXT("Drone movement: desired velocity, current velocity, spring state."),
		ECVF_Cheat);
	
	TAutoConsoleVariable<int32> Avoidance(
		TEXT("dc.Debug.Avoidance"),
		0,
		TEXT("Drone avoidance: probe rays/sweeps and resulting steering vector."),
		ECVF_Cheat);
	
	TAutoConsoleVariable<int32> Targeting(
		TEXT("dc.Debug.Targeting"),
		0,
		TEXT("Drone targeting: current target, target point, path point, enemy/item target."),
		ECVF_Cheat);
	
	TAutoConsoleVariable<float> Duration(
		TEXT("dc.Debug.Duration"),
		0.f,
		TEXT("Lifetime in seconds for debug draws. 0 = single frame.\n"),
		ECVF_Cheat);
}
