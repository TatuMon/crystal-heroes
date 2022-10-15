#ifndef GAME_UTILS_H
#define GAME_UTILS_H

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

		void initTransition(Screen newScreen);
		//Returns true if the transition finished
		bool updateTransition();
		
	private:
		Screen* fromScreen = NULL;
		Screen toScreen;

	};
}

#endif
