#include <raylib.h>
#include <string>

#include "characters.h"

int main(){
	InitWindow(800, 600, "Crystal Heroe");
	SetTargetFPS(60);

	InitAudioDevice();
	SetMasterVolume(masterVolume);
	SetMusicVolume(currentBGM, musicVolume);

	//SetExitKey(NULL); //Disable ESC key to exit the game
	while (!WindowShouldClose()) {
		ClearBackground(RAYWHITE);

		switch (currentScreen)
		{
			case TITLE_SCREEN:
				DrawTitleScreen();
				break;

			case OPTIONS_SCREEN:
				DrawOptionsScreen();
				break;

			case PLAY_SCREEN:
				DrawPlayScreen();
				break;

			case GAME_OVER_SCREEN:
				DrawGameOverScreen();
				break;

			default:
				break;
		}
	}

	StopMusicStream(currentBGM);

	CloseAudioDevice();
	CloseWindow();

}