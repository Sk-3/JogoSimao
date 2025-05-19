#include "Character.h"


Character::Character()
{
	health = 10;
	power = 0;
	speed.x = 0;
	speed.y = 0;
}

Character::~Character()
{
}

void Character::move()
{
	shape.move(speed);
}

sf::RectangleShape Character::getShape()
{
	return shape;
}

void Character::changeSpeed(sf::Vector2f addSpeed)
{
	speed += addSpeed;
}


void Character::draw()
{
	pGerGraphic->getWindow()->draw(shape);
}

void Character::update()
{
}
