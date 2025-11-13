#include "AABasePlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/Character.h"

void AABasePlayerController::BeginPlay()
{
    Super::BeginPlay();

    // Dodaj mapping context po starcie
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
        ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        if (DefaultMappingContext)
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
    }
}

void ABasePlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
    {
        if (IA_Move)
            EnhancedInput->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AABasePlayerController::Move);

        if (IA_Attack)
            EnhancedInput->BindAction(IA_Attack, ETriggerEvent::Triggered, this, &AABasePlayerController::Attack);

        if (IA_Interact)
            EnhancedInput->BindAction(IA_Interact, ETriggerEvent::Triggered, this, &AABasePlayerController::Interact);
    }
}

void ABasePlayerController::Move(const FInputActionValue& Value)
{
    FVector2D Movement = Value.Get<FVector2D>();

    APawn* ControlledPawn = GetPawn();
    if (ControlledPawn)
    {
        ControlledPawn->AddMovementInput(ControlledPawn->GetActorForwardVector(), Movement.Y);
        ControlledPawn->AddMovementInput(ControlledPawn->GetActorRightVector(), Movement.X);
    }
}

void ABasePlayerController::Attack(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("Attack triggered!"));
}

void ABasePlayerController::Interact(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("Interact triggered!"));
}
