#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <string>

#include <raylib.h>

////////MOVER DE ACA
enum Direction {
	NORTH = 0,
	EAST,
	SOUTH,
	WEST
};
///////

//--------------------------
// CHARACTERS TYPES
//--------------------------
struct Character {
	std::string name;
	Vector2 position;
	bool isMoving;

	//Moves the characters n cells in x direction.
	//Returns false if the character couldn't move.
	bool move(Direction direction, int cells);
};

struct Player : Character {};

struct Ally : Character {};

struct Enemy : Character {};

#endif