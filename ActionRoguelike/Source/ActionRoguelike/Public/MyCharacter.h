// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class ACTIONROGUELIKE_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

// constructor
public:
	// Sets default values for this character's properties
	AMyCharacter();
// this next function will be called whenever our character gets spawned into the world
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// passes in DeltaTime: amount of seconds since it's passed the last frame
	// usually 60 ms if 60 FPS
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};