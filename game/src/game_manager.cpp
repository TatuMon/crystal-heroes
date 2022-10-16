#include "game_manager.h"

#include <iostream>

GameManager::GameManager() {
	this->currentScreen = new TitleScreen;
}

void GameManager::initGame() {
	//Window
	InitWindow(800, 600, "Crystal Heroe");
	SetTargetFPS(60);
	SetExitKey(NULL); //Disable ESC key to exit the game

	//Audio
	InitAudioDevice();
	this->currentBGM = LoadMusicStream("resources/music/0_Menu_Master.ogg");
	SetMasterVolume(this->masterVolume);
	SetMusicVolume(this->currentBGM, musicVolume);
	PlayMusicStream(this->currentBGM);

	//Input
	//this->initInputThread();
}

void GameManager::closeGame() {
	//this->joinInputThread();
	StopMusicStream(this->currentBGM);
	UnloadMusicStream(this->currentBGM);
	CloseAudioDevice();
	CloseWindow();
}

void GameManager::initTransition(Screen* newScreen) {
	this->onTransition = true;
	//this->fromScreen = &currentScreen;
	this->toScreen = newScreen;
}

bool GameManager::updateTransition() {
	//See how the pre-make does it

	return false;
}

void GameManager::updateFrame() {
	UpdateMusicStream(this->currentBGM);

	this->currentScreen->drawScreen();
}

//void GameManager::initInputThread() {
//	this->inputThread = std::thread([]() {/* READ INPUT */});
//}

//void GameManager::joinInputThread() {
//	this->inputThread.join();
//}