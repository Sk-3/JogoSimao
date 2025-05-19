#include "cuboNormal.h"

cuboNormal::cuboNormal()
	:cubo()
{
	
	moveSpeed = 2.f;
	shape.setPosition(rand()%window->getSize().x, 0);
	int x = rand() % 3;
	switch (x)
	{
	case 0:
	{
		shape.setFillColor(sf::Color::Red);
		break;
	}
	case 1: {
		shape.setFillColor(sf::Color::Blue);
		break;

	}
	case 2: {
		shape.setFillColor(sf::Color::Yellow);
		break;
	}
	default:
		break;
	}
	
	shape.setSize(sf::Vector2f(50.f, 50.f));
}

cuboNormal::~cuboNormal() {

}