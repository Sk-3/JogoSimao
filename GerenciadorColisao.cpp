#include "GerenciadorColisao.h"
#include <iostream>
GerenciadorColisao::GerenciadorColisao():Ente()
{
}
GerenciadorColisao::GerenciadorColisao(std::vector<Character*>* characters)
	:Ente()
{
	this->characters = characters;
	ppPlayer = Player2::getPlayer(); 
}



GerenciadorColisao::~GerenciadorColisao()
{
	
}

void GerenciadorColisao::windowColision()
{
	for (const auto& charact : *characters) {
		sf::FloatRect playerBounds = charact->getBounds();

		//left colison
		if (playerBounds.left < 0.f) {
			charact->hitLeft();
		}
		//right colision
		else if (playerBounds.left + playerBounds.width > pGerGraphic->getWindow()->getSize().x) {
			charact->hitRight();
		}
		//top colision
		if (playerBounds.top < 0.f) {
			charact->hitTop();
		}
		//bottom colision
		else if (playerBounds.top + playerBounds.height > pGerGraphic->getWindow()->getSize().y) {
			charact->hitGround();
		}
	}





}
