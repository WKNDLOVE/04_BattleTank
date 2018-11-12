// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"



void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PLayerController is not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PLayerController is possesing: %s"),*(ControlledTank->GetName()));

	}
	
}

ATank * ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}