#include "Character.h"

Character::Character()
	:Entity()
{
	jumps = 2;
	health = 10;
	power = 0;
	speed.x = 0;
	speed.y = 0;
}

Character::Character(sf::Vector2f size, sf::Vector2f pos)
	:Entity(size, pos)
{
	jumps = 2;
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

void Character::changeSpeed(sf::Vector2f addSpeed)
{
	speed += addSpeed;
}

void Character::hitTop(sf::FloatRect obstaculo)
{
	speed.y = 0;
	shape.setPosition(getBounds().left, obstaculo.top + obstaculo.height);
}

void Character::hitGround(sf::FloatRect obstaculo)
{
	speed.y = 0;
	shape.setPosition(getBounds().left, (obstaculo.top - getBounds().height));
	jumps = 2;
}

void Character::hitLeft(sf::FloatRect obstaculo)
{
	speed.x = 0;
	shape.setPosition(obstaculo.left + obstaculo.width, getBounds().top);
	if (jumps == 0) {
		jumps = 1;
	}
}

void Character::hitRight(sf::FloatRect obstaculo)
{
	
	speed.x = 0;
	shape.setPosition(obstaculo.left - getBounds().width, getBounds().top);
	if (jumps == 0) {
		jumps = 1;
	}
}




void Character::executar() {
	move();
	
}

void Character::draw()
{
	pGerGraphic->getWindow()->draw(shape);
}
