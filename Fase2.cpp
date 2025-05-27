#include "Fase2.h"
Fase2::Fase2():
GameState()
{
	//Criação das plataformas da fase
		int plat = (1280 / 50) + 1;
		for (int i = 0; i <= plat; i++) {
			obstaculos.push_back(new Plataforma(sf::Vector2f(50.f, 50.f), sf::Vector2f(50 * i, 670)));
		}
		obstaculos.push_back(new Plataforma(sf::Vector2f(60.f, 60.f), sf::Vector2f(200, 200)));
		obstaculos.push_back(new Plataforma(sf::Vector2f(100.f, 100.f), sf::Vector2f(500.f, 500.f)));

}

Fase2::~Fase2()
{
}

void Fase2::executar()
{
	window->clear();
	pGerGraphic->getWindow()->setView(view);
	handleEvent();
	view.setCenter(player->getPosition());


	for (auto const& obst : obstaculos) {
		obst->executar();
	}

	for (auto const& charact : characters) {
		charact->executar();
	}

	for (auto const& projetil : projeteis) {
		projetil->executar();
	}
	colision.executar();
	gravity.executar();
	for (auto const& charact : characters) {
		charact->draw();
	}
}






