#include "Character.h"


Character::Character()
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
void Character::hitTop()
{

	shape.setPosition(characterBounds.left, 0.f);
	speed.y = 0;

}
void Character::hitRight()
{
	jumps = 1;
	shape.setPosition(pGerGraphic->getWindow()->getSize().x - characterBounds.width, characterBounds.top + speed.y);
	speed.x = 0;
}
void Character::hitLeft() {
	jumps = 1;
	shape.setPosition(0.f, characterBounds.top + speed.y);
	speed.x = 0;
}
void Character::hitGround()
{
	jumps = 2;
	speed.y = 0;
	shape.setPosition(characterBounds.left + speed.x, pGerGraphic->getWindow()->getSize().y - characterBounds.height);
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
	characterBounds = shape.getGlobalBounds();
}

const sf::FloatRect Character::getBounds() {
	return characterBounds;
}
