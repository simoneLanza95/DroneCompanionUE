// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/Controller/DCDroneAIController.h"


ADCDroneAIController::ADCDroneAIController()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ADCDroneAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

void ADCDroneAIController::OnUnPossess()
{
	Super::OnUnPossess();
}
