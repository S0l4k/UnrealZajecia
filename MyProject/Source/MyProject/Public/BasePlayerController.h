#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

// Enhanced Input
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "BasePlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class MYPROJECT_API ABasePlayerController : public APlayerController
{
    GENERATED_BODY()

public:

    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

    // ========== INPUT MAPPING CONTEXT ==========
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputMappingContext* InputMapping;

    // ========== INPUT ACTIONS ==========
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* InteractAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* AttackAction;

protected:

    UFUNCTION()
    void Move(const FInputActionValue& Value);

    UFUNCTION()
    void Interact(const FInputActionValue& Value);

    UFUNCTION()
    void Attack(const FInputActionValue& Value);
};
