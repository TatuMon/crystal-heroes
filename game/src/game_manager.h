#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include <raylib.h>
#include <thread>

#include "screen.h"

struct GameManager {
	bool onPause = false;
	bool onTransition = false;

	Screen* currentScreen;
	Music currentBGM = { 0 };
	Font font = { 0 };

	float masterVolume = 1.0f;
	float musicVolume = 1.0f;

	GameManager();

	void initGame();
	void closeGame();

	void initTransition(Screen* newScreen);

	//Returns true if the transition finished
	bool updateTransition();

	void updateFrame();

	void changeBGM(Music newMusic);
	void readInput();

private:
	std::thread inputThread;
	Screen* fromScreen = NULL;
	Screen* toScreen = NULL;

	/*void initInputThread();
	void joinInputThread();*/
};


#endif