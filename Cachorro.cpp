#include "Cachorro.h"

Cachorro::Cachorro(sf::Vector2f size, sf::Vector2f pos)
	:Inimigo(size, pos)
{
	shape.setFillColor(sf::Color::Blue);
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