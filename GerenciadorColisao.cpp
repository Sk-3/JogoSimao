#include "GerenciadorColisao.h"
#include <iostream>
GerenciadorColisao::GerenciadorColisao()
	:Ente()
{
	pPlayer = Player2::getPlayer(); 
}

GerenciadorColisao::~GerenciadorColisao()
{
	
}

void GerenciadorColisao::windowColision()
{
	sf::FloatRect playerBounds = pPlayer->getBounds();

	//left colison
	if (playerBounds.left < 0.f) {
		pPlayer->hitLeft();
	}
	//right colision
	else if (playerBounds.left + playerBounds.width > pGerGraphic->getWindow()->getSize().x) {
		pPlayer->hitRight();
	}
	//top colision
	if (playerBounds.top < 0.f) {
		pPlayer->hitTop();
	}
	//bottom colision
	else if (playerBounds.top + playerBounds.height > pGerGraphic->getWindow()->getSize().y) {
		pPlayer->hitGround();
	}
}
