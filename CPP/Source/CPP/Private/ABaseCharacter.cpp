void ABasePlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);

    Input->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABasePlayerCharacter::Move);
    Input->BindAction(InteractAction, ETriggerEvent::Started, this, &ABasePlayerCharacter::Interact);
    Input->BindAction(AttackAction, ETriggerEvent::Started, this, &ABasePlayerCharacter::Attack);
}

void ABasePlayerCharacter::Move(const FInputActionValue& Value)
{
    FVector2D Axis = Value.Get<FVector2D>();
    AddMovementInput(GetActorForwardVector(), Axis.Y);
    AddMovementInput(GetActorRightVector(), Axis.X);
}

void ABasePlayerCharacter::Interact(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("Interact pressed"));
}

void ABasePlayerCharacter::Attack(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("Attack pressed"));
}
