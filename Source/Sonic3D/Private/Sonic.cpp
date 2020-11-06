// Fill out your copyright notice in the Description page of Project Settings.


#include "Sonic.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ASonic::ASonic()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
	check(CameraComponent != nullptr);
	CameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));

	CameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));
}

// Called when the game starts or when spawned
void ASonic::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASonic::MoveForward(float value)
{

}

void ASonic::MoveRight(float value)
{

}

void ASonic::TurnAtRate(float value)
{

}

void ASonic::LookUpRate(float value)
{

}

// Called every frame
void ASonic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASonic::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

