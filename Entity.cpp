#include "Entity.h"

const sf::FloatRect Entity::getBounds()
{
	return entityBounds;
}

Entity::Entity():
	position(sf::Vector2f(0.f,0.f)), shapeSize(sf::Vector2f(50.f, 50.f))
{
}

Entity::Entity(sf::Vector2f size, sf::Vector2f pos) :
position(pos), shapeSize(size)
{
	shape.setSize(shapeSize);
	shape.setPosition(pos);
}

Entity::~Entity()
{
}
