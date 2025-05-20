#include "Inimigo.h"

Inimigo::Inimigo()
{
	nivel_maldade = 0;
	shape.setFillColor(sf::Color::Green);
	shape.setSize(sf::Vector2f(50.f, 50.f));
	shape.setPosition(sf::Vector2f(100.f, 100.f));
}
Inimigo::~Inimigo() {

}
