#include "Gravidade.h"

Gravidade::Gravidade(std::vector<Character*>* characters)
{
	gravityForce.x = 0;
	gravityForce.y = 0.2;
	this->characters = characters;
}

void Gravidade::aplyGravity()
{
	for (const auto &character : *characters) {
		character->changeSpeed(gravityForce);
	}
}
