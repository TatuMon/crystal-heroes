#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <string>
#include <raylib.h>

#include "game_utils.h"

typedef GameUtils::CardinalDirection CardinalDirection;

//--------------------------
// CHARACTERS TYPES
//--------------------------
struct Character {
	std::string name;
	Vector2 position;
	bool isMoving = false;

	Character(std::string name, Vector2 initPosition);

	//Moves the characters n steps in x direction.
	//Returns false if the character couldn't move.
	bool move(CardinalDirection direction, int steps);

};

struct Player : Character {
	Player(std::string name, Vector2 initPosition);
};

struct Ally : Character {
	Ally(std::string name, Vector2 initPosition);
};

struct Enemy : Character {
	Enemy(std::string name, Vector2 initPosition);
};

struct Neutral : Character {
	Neutral(std::string name, Vector2 initPosition);
};

#endif