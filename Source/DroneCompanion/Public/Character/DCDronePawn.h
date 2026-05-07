// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DCDronePawn.generated.h"

class UFloatingPawnMovement;
class USphereComponent;

UCLASS()
class DRONECOMPANION_API ADCDronePawn : public APawn
{
	GENERATED_BODY()

public:
	ADCDronePawn();

	/************************** Getters **************************/
	
	FORCEINLINE USphereComponent* GetCollisionSphere() const { return CollisionSphere; }
	FORCEINLINE UStaticMeshComponent* GetMeshComponent() const { return MeshComponent; }
	FORCEINLINE UFloatingPawnMovement* GetMovement() const { return MovementComponent; }
	
protected:
	virtual void BeginPlay() override;

	/************************** Components **************************/

	UPROPERTY(VisibleAnywhere, Category = "DC")
	TObjectPtr<USphereComponent> CollisionSphere;
 
	UPROPERTY(VisibleAnywhere, Category = "DC")
	TObjectPtr<UStaticMeshComponent> MeshComponent;
 
	UPROPERTY(VisibleAnywhere, Category = "DC")
	TObjectPtr<UFloatingPawnMovement> MovementComponent;

	UPROPERTY(EditDefaultsOnly, Category = "DC | Config", meta = (ClampMin = "10.0", UIMin = "10.0"))
	float CollisionRadius = 35.f;
};
