// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "P_Rango_Flappy.generated.h"

UCLASS()
class CATGAME_API AP_Rango_Flappy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AP_Rango_Flappy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

private:
	UPROPERTY(EditDefaultOnly, Catagory = "Components") class UCapsuleComponent* CapsuleComp;
	UPROPERTY(EditDefaultOnly, Catagory = "Components") class UstaticMeshComponent* BaseMesh;


};
