#include "Fase2.h"
Fase2::Fase2():
GameState(), gravity(&characters), colision(&characters, &obstaculos)
{
	pPlayer2 = Player2::getPlayer();
	characters.push_back(new Inimigo());
	//characters.push_back(new Inimigo(sf::Vector2f(200.f, 200.f), sf::Vector2f(150.f, 150.f)));

	
	characters.push_back(pPlayer2);
	
	
	obstaculos.push_back(new Plataforma(sf::Vector2f(1280.f, 50.f), sf::Vector2f(0, 670)));

	int plat = (1280 / 50) + 1;
	for (int i = 0; i <= plat; i++) {
		obstaculos.push_back(new Plataforma(sf::Vector2f(50.f, 50.f), sf::Vector2f(50 * i, 670)));
	}


	obstaculos.push_back(new Plataforma(sf::Vector2f(60.f, 60.f), sf::Vector2f(200, 200)));

	obstaculos.push_back(new Plataforma(sf::Vector2f(100.f, 100.f), sf::Vector2f(500.f, 500.f)));

}

Fase2::~Fase2()
{
	pPlayer2->resetPlayer();
}

void Fase2::draw()
{
	window->clear();
	for (auto const& obst : obstaculos) {
		obst->draw();
	}
	for (auto const& charact : characters) {
		charact->draw();
	}
	window->draw(stats);
}

void Fase2::handleEvent()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		pPlayer2->moveLeft();
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
		pPlayer2->moveRight();
	}
	else {
		pPlayer2->stopAxisX();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)){

		pPlayer2->moveUp();
	
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		pPlayer2->moveDown();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) {
		pPlayer2->dash();
	}

	sf::Event ev;
	while (window->pollEvent(ev)) {
		switch (ev.type) {
		case sf::Event::Closed:
			setAction(Actions::VOLTAR_1_MENU);
			break;
		case sf::Event::KeyPressed:
			if (ev.key.code == sf::Keyboard::Escape) {
				setAction(Actions::PAUSE);
			}

			break;
		case sf::Event::MouseButtonPressed:
			if (ev.mouseButton.button == sf::Mouse::Left) {
				mouseClick();
			}
		}
	}
}


void Fase2::update()
{
	for (auto const& charact : characters) {
		charact->update();
	}
	for (const auto& character : characters) {
		character->move();
	}

	for (const auto& obstac : obstaculos) {
		obstac->update();
	}

	colision.colision();

	
	gravity.aplyGravity();



	

	updateStats();


}


