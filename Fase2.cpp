#include "Fase2.h"
Fase2::Fase2():
GameState()
{
	
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
	handleEvent();
	pGerGraphic->getWindow()->setView(view);
	view.setCenter(player->getPosition());
	for (auto const& obst : obstaculos) {
		obst->executar();
	}

	for (auto const& charact : characters) {
		charact->executar();
	}
	colision.executar();
	gravity.executar();
}

void Fase2::handleEvent()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		player->moveLeft();
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
		player->moveRight();
	}
	else {
		player->stopAxisX();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)){

		player->moveUp();
	
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		player->moveDown();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) {
		player->dash();
	}

	sf::Event ev;
	while (window->pollEvent(ev)) {
		switch (ev.type) {
		case sf::Event::Closed:
			pGerGraphic->getWindow()->close();
			break;
		case sf::Event::KeyPressed:
			if (ev.key.code == sf::Keyboard::Escape) {
				setAction(Actions::PAUSE);
			}

			break;
		case sf::Event::MouseButtonPressed:
			if (ev.mouseButton.button == sf::Mouse::Left) {
				//mouseClick();
			}
		}
	}
}




