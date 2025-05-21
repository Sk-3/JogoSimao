#pragma once
#include "Ente.h"
class Entity : public Ente
{
protected:
	sf::Vector2f position;
	sf::Vector2f shapeSize;
	sf::RectangleShape shape;
	sf::FloatRect entityBounds;
public:
	virtual void draw() = 0;
	virtual void update() = 0;
	const virtual sf::FloatRect getBounds();
	Entity();
	Entity(sf::Vector2f size, sf::Vector2f pos);
	~Entity();

};

