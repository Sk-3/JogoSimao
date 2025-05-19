#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"
class cubo : public Ente
{
protected:

	sf::RectangleShape shape;
	float moveSpeed;
	sf::RenderWindow* window;
public:
	cubo();
	cubo(sf::RenderWindow* window);
	~cubo();
	virtual bool getClicked(sf::Vector2i* mousePos);

	virtual sf::Vector2f getPosition();
	virtual sf::Vector2f getSize();

	virtual void setPosition(sf::Vector2f newPos);

	virtual void update();
	virtual void draw();
};

