#include "AMasterGameMode.h"

AAMasterGameMode::AAMasterGameMode()
{
	
	DefaultPawnClass = AABasePlayerCharacter::StaticClass();

	
	PlayerControllerClass = AABasePlayerController::StaticClass();
}
