#include "Fase1.h"
Fase1::Fase1() :
	GameState()
{
	//Criação das plataformas da fase

	for (int i = 0; i <= 30; i++) {
		obstaculos.push_back(new Plataforma(sf::Vector2f(100.f, 100.f), sf::Vector2f(100 * i, 670)));
	}

}

Fase1::~Fase1()
{
}

void Fase1::executar()
{
	//clock.restart();
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
	hud.executar();
	hud.draw();
	removerProjeteis();
}






