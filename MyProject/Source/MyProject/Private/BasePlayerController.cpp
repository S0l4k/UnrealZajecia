#include "BasePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

void ABasePlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
    {
        UEnhancedInputLocalPlayerSubsystem* Subsystem =
            LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

        if (Subsystem && InputMapping)
        {
            Subsystem->AddMappingContext(InputMapping, 0);
        }
    }
}

void ABasePlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent);

    if (EnhancedInput)
    {
        if (MoveAction)
            EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Move);

        if (InteractAction)
            EnhancedInput->BindAction(InteractAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Interact);

        if (AttackAction)
            EnhancedInput->BindAction(AttackAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Attack);
    }
}

void ABasePlayerController::Move(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("Move!"));
}

void ABasePlayerController::Interact(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("Interact!"));
}

void ABasePlayerController::Attack(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("Attack!"));
}
