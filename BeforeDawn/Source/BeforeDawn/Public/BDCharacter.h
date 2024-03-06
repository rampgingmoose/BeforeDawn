// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BDCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class BEFOREDAWN_API ABDCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABDCharacter();

protected:

	UPROPERTY(EditAnywhere)
	UCameraComponent* CameraComp;
	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArmComp;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
