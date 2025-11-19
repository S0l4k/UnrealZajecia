// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ABaseCharacter.generated.h"

UCLASS()
class CPP_API AABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
class UInputMappingContext* InputMapping;

UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
class UInputAction* MoveAction;

UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
class UInputAction* InteractAction;

UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
class UInputAction* AttackAction;

void Move(const FInputActionValue& Value);
void Interact(const FInputActionValue& Value);
void Attack(const FInputActionValue& Value);