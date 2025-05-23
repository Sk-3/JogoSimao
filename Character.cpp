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


//referentes a colisão com a janela

//void Character::hitTop()
//{
//
//	shape.setPosition(entityBounds.left, 0.f);
//	speed.y = 0;
//
//}
//void Character::hitRight()
//{
//	jumps = 1;
//	shape.setPosition(pGerGraphic->getWindow()->getSize().x - entityBounds.width, entityBounds.top + speed.y);
//	speed.x = 0;
//}
//void Character::hitLeft() {
//	jumps = 1;
//	shape.setPosition(0.f, entityBounds.top + speed.y);
//	speed.x = 0;
//}
//void Character::hitGround()
//{
//	jumps = 2;
//	speed.y = 0;
//	shape.setPosition(entityBounds.left + speed.x, pGerGraphic->getWindow()->getSize().y - entityBounds.height);
//}




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
	sf::FloatRect characterBounds = shape.getGlobalBounds();
	speed.y = 0;
	shape.setPosition(characterBounds.left, obstaculo.top + obstaculo.height);
}

void Character::hitGround(sf::FloatRect obstaculo)
{
	sf::FloatRect characterBounds = shape.getGlobalBounds();
	speed.y = 0;
	shape.setPosition(characterBounds.left + speed.x, (obstaculo.top - characterBounds.height));

	jumps = 2;
}

void Character::hitLeft(sf::FloatRect obstaculo)
{
	sf::FloatRect characterBounds = shape.getGlobalBounds();
	speed.x = 0;
	shape.setPosition(obstaculo.left + obstaculo.width, characterBounds.top);
	if (jumps == 0) {
		jumps = 1;
	}
}

void Character::hitRight(sf::FloatRect obstaculo)
{
	sf::FloatRect characterBounds = shape.getGlobalBounds();
	speed.x = 0;
	shape.setPosition(obstaculo.left - characterBounds.width, characterBounds.top);
	if (jumps == 0) {
		jumps = 1;
	}
}


void Character::resetCharacter()
{
	//shape.setPosition(position);
	health = 10;
	speed = sf::Vector2f(0, 0);
}

void Character::draw()
{
	pGerGraphic->getWindow()->draw(shape);
}

void Character::update()
{
	entityBounds = shape.getGlobalBounds();
	//characterBounds = shape.getGlobalBounds();
}
