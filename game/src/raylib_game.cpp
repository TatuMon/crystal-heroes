#include <raylib.h>
#include <string>
#include <thread>
#include <iostream>

#include "characters.h"
#include "screen.h"
#include "game_utils.h"
#include "game_manager.h"

GameManager gameManager;

int main(){
	gameManager.initGame();

	while (!WindowShouldClose()) {
		if (!gameManager.onPause) {
			gameManager.updateFrame();
		}
	}

	UnloadMusicStream(gameManager.currentBGM);

	gameManager.closeGame();
	delete gameManager.currentScreen;
}