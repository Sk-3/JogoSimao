#include "Cachorro.h"

Cachorro::Cachorro(sf::Vector2f size, sf::Vector2f pos)
	:Inimigo(size, pos)
{
}

Cachorro::Cachorro()
{
}

Cachorro::~Cachorro()
{
}

void Cachorro::executar() {
	move();
}