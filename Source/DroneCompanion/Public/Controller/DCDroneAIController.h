// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DCDroneAIController.generated.h"

UCLASS()
class DRONECOMPANION_API ADCDroneAIController : public AAIController
{
	GENERATED_BODY()

public:
	ADCDroneAIController();

protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
};
