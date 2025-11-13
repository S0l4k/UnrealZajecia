#include "AABasePlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "AABasePlayerCharacter.h"

void AABasePlayerController::BeginPlay()
{
    Super::BeginPlay();

    // Dodaj kontekst mappingu do LocalPlayerSubsystem
    if (ULocalPlayer* LP = GetLocalPlayer())
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
        {
            if (DefaultMappingContext)
            {
                Subsystem->AddMappingContext(DefaultMappingContext, 0);
            }
        }
    }
}

void AABasePlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
    {
        if (IA_Move)
            EnhancedInput->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AABasePlayerController::Move);

        if (IA_Attack)
            EnhancedInput->BindAction(IA_Attack, ETriggerEvent::Started, this, &AABasePlayerController::Attack);

        if (IA_Interact)
            EnhancedInput->BindAction(IA_Interact, ETriggerEvent::Started, this, &AABasePlayerController::Interact);
    }
}

void AABasePlayerController::Move(const FInputActionValue& Value)
{
    FVector2D MovementVector = Value.Get<FVector2D>();
    if (AABasePlayerCharacter* PlayerChar = Cast<AABasePlayerCharacter>(GetPawn()))
    {
        PlayerChar->Move(Value);
    }
}

void AABasePlayerController::Attack(const FInputActionValue& Value)
{
    if (AABasePlayerCharacter* PlayerChar = Cast<AABasePlayerCharacter>(GetPawn()))
    {
        PlayerChar->Attack(Value);
    }
}

void AABasePlayerController::Interact(const FInputActionValue& Value)
{
    if (AABasePlayerCharacter* PlayerChar = Cast<AABasePlayerCharacter>(GetPawn()))
    {
        PlayerChar->Interact(Value);
    }
}

