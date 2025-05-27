#include "Projetil.h"

Projetil::Projetil(sf::Vector2f size, sf::Vector2f pos, Directions direction)
	:Entity(size, pos)
{
	if (direction == Directions::LEFT) {
		speed = sf::Vector2f(-10.f, 0.f);
	}
	else {
		speed = sf::Vector2f(10.f, 0.f);
	}
	ativo = 1;
}

Projetil::Projetil()
	:Entity()
{
	ativo = 1;
}

Projetil::~Projetil()
{
}

void Projetil::executar()
{
	move();
	pGerGraphic->getWindow()->draw(shape);
}
