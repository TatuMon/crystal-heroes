#ifndef GAME_UTILS_H
#define GAME_UTILS_H

#include <thread>

#include "screen.h"
#include "raylib.h"

namespace GameUtils {
	enum CardinalDirection {
		NORTH = 0,
		EAST,
		SOUTH,
		WEST
	};

	struct GameManager {
		bool onPause = false;
		bool onTransition = false;

		Screen currentScreen;
		Music currentBGM;

		float masterVolume = 1.0f;
		float musicVolume = 1.0f;

		GameManager();

		void initGame();
		void closeGame();

		void initTransition(Screen newScreen);
		//Returns true if the transition finished
		bool updateTransition();
		void changeBGM(Music newMusic);
		void readInput();
		
	private:
		std::thread inputThread;
		Screen* fromScreen = NULL;
		Screen toScreen;

		void initInputThread();
		void joinInputThread();
	};
}

#endif
