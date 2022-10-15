#include <raylib.h>

#include "game_utils.h"
#include "screen.h"

GameUtils::GameManager::GameManager() {}

void GameUtils::GameManager::initGame() {
	TitleScreen initialScreen;
	this->currentScreen = initialScreen;

	InitWindow(800, 600, "Crystal Heroe");
	SetTargetFPS(60);

	InitAudioDevice();
	SetMasterVolume(this->masterVolume);
	SetMusicVolume(this->currentBGM, musicVolume);
}

void GameUtils::GameManager::initTransition(Screen newScreen) {
	this->onTransition = true;
	this->fromScreen = &currentScreen;
	this->toScreen = newScreen;
}

bool GameUtils::GameManager::updateTransition() {
	//See how the pre-make does it

	return false;
}