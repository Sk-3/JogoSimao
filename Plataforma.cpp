#include "Plataforma.h"

Plataforma::Plataforma(sf::Vector2f size, sf::Vector2f pos)
	:Obstaculo(size, pos)
{
}

Plataforma::Plataforma()
{

}

Plataforma::~Plataforma()
{
}

void Plataforma::obstacular(Player2* pPlayer)
{
}

void Plataforma::draw()
{
	pGerGraphic->getWindow()->draw(shape);
}

void Plataforma::update() {
	entityBounds = shape.getGlobalBounds();
	if (isColiding) {
		shape.setFillColor(sf::Color::Red);
	}
	else {
		shape.setFillColor(sf::Color::White);
	}
}