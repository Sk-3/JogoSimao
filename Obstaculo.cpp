#include "Obstaculo.h"

Obstaculo::Obstaculo(sf::Vector2f size, sf::Vector2f pos)
:Entity(size, pos)
{
	danoso = 0;
}

Obstaculo::Obstaculo()
{
	danoso = 0;
}

Obstaculo::~Obstaculo()
{
}

void Obstaculo::obstacular(Player2* pPlayer)
{
}
