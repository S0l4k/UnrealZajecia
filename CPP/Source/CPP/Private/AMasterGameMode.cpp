#include "AMasterGameMode.h"
#include "AABasePlayerCharacter.h"
#include "AABasePlayerController.h"

AAMasterGameMode::AAMasterGameMode()
{
    DefaultPawnClass = AABasePlayerCharacter::StaticClass();
    PlayerControllerClass = AABasePlayerController::StaticClass();
}
