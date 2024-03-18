// Fill out your copyright notice in the Description page of Project Settings.


#include "P_Rango_Flappy.h"
#include "Components/CapsuleComponent.h"
// Sets default values
AP_Rango_Flappy::AP_Rango_Flappy()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	//Root Component "the big boss" will be told to use CapsuleCorp
	RootComponent = CapsuleComp;
	
	//BaseMesh is being called
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base_Mesh"));
	BaseMesh->SetupAttachment(CapsuleComp);
}	

// Called when the game starts or when spawned
void AP_Rango_Flappy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_Rango_Flappy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AP_Rango_Flappy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

