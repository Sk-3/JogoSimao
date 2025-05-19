#pragma once
#include "Ente.h"
class Entity : public Ente
{
protected:
	sf::Vector2f position;
	sf::RectangleShape shape;
public:
	virtual void draw() = 0;
	virtual void update() = 0;
	Entity();
	~Entity();

};

