#include <raylib.h>
#include <string>
#include <thread>

#include "characters.h"
#include "screen.h"
#include "game_utils.h"

GameUtils::GameManager gameManager;

int main(){
	gameManager.initGame();

	while (!WindowShouldClose()) {
		if (!gameManager.onPause) {
			gameManager.currentScreen.drawScreen();
		}
	}

	gameManager.closeGame();
}