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
}

#endif
