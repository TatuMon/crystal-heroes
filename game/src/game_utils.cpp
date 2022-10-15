#include <raylib.h>

#include "game_utils.h"
#include "screen.h"

typedef GameUtils::GameManager GameManager;

GameManager::GameManager() {
	TitleScreen initialScreen;
	this->currentScreen = initialScreen;

	this->currentBGM = LoadMusicStream("/resources/music/0_Menu_Master.ogg");
}

void GameManager::initGame() {
	InitWindow(800, 600, "Crystal Heroe");
	SetTargetFPS(60);
	SetExitKey(NULL); //Disable ESC key to exit the game
	InitAudioDevice();
	SetMasterVolume(this->masterVolume);
	SetMusicVolume(this->currentBGM, musicVolume);
	this->initInputThread();
}

void GameManager::closeGame() {
	this->joinInputThread();
	StopMusicStream(this->currentBGM);
	UnloadMusicStream(this->currentBGM);
	CloseAudioDevice();
	CloseWindow();
}

void GameManager::initTransition(Screen newScreen) {
	this->onTransition = true;
	this->fromScreen = &currentScreen;
	this->toScreen = newScreen;
}

bool GameManager::updateTransition() {
	//See how the pre-make does it

	return false;
}

void GameManager::initInputThread() {
	this->inputThread = std::thread([]() {/* READ INPUT */});
}

void GameManager::joinInputThread() {
	this->inputThread.join();
}