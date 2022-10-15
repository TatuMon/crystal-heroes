#include "characters.h"

Character::Character(std::string name, Vector2 initPosition) {
	this->name = name;
	this->position = initPosition;
}

bool Character::move(CardinalDirection direction, int steps) {


	return false;
}

Player::Player(std::string name, Vector2 initPosition)
: Character(name, initPosition) {};

Ally::Ally(std::string name, Vector2 initPosition)
: Character(name, initPosition) {};

Enemy::Enemy(std::string name, Vector2 initPosition)
: Character(name, initPosition) {};

Neutral::Neutral(std::string name, Vector2 initPosition)
	: Character(name, initPosition) {};