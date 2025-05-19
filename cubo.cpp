#include "cubo.h"

cubo::cubo() :
	Ente()
{
	window = pGerGraphic->getWindow();
}
cubo::~cubo()
{
	window = nullptr;
}

bool cubo::getClicked(sf::Vector2i* mousePos)
{
	sf::Vector2f mouse;
	mouse.x = (float)mousePos->x;
	mouse.y = (float)mousePos->y;
	return shape.getGlobalBounds().contains(mouse);
}

sf::Vector2f cubo::getPosition()
{
	return shape.getPosition();
}

sf::Vector2f cubo::getSize()
{
	return shape.getSize();
}

void cubo::setPosition(sf::Vector2f newPos)
{
	shape.setPosition(newPos);
}

void cubo::update()
{
	shape.move(0.f, moveSpeed);
}

void cubo::draw()
{
	window->draw(shape);
}
