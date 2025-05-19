#pragma once
#include <vector>
#include "Character.h"
class Gravidade
{
	sf::Vector2f gravityForce;
	std::vector<Character*>* characters;
public:
	Gravidade(std::vector<Character*>* characters);
	void aplyGravity();
};

