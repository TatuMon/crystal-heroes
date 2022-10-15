#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <string>
#include <raylib.h>

#include "game_utils.h"

//--------------------------
// CHARACTERS TYPES
//--------------------------
struct Character {
	std::string name;
	Vector2 position;
	bool isMoving;

	//Moves the characters n steps in x direction.
	//Returns false if the character couldn't move.
	bool move(CardinalDirection direction, int steps);
};

struct Player : Character {};

struct Ally : Character {};

struct Enemy : Character {};

#endif