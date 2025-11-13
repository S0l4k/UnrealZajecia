#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"

// UWAGA: ten include MUSI być ostatni!
#include "AABasePlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class CPP_API AABasePlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

    // Mapping context i actiony - ustaw w Blueprint/Editor (EditAnywhere)
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* IA_Move;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* IA_Attack;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* IA_Interact;

protected:
    // callbacki
    UFUNCTION()
    void Move(const FInputActionValue& Value);

    UFUNCTION()
    void Attack(const FInputActionValue& Value);

    UFUNCTION()
    void Interact(const FInputActionValue& Value);
};
