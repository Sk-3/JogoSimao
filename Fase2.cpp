#include "Fase2.h"

Fase2::Fase2():
GameState(), gravity(&characters), colision()
{
	
	pPlayer2 = Player2::getPlayer();
	characters.push_back(pPlayer2);
}

Fase2::~Fase2()
{
	pPlayer2->resetPlayer();
}

void Fase2::draw()
{
	window->clear();
	pPlayer2->draw();
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

	pPlayer2->update();
	gravity.aplyGravity();
	for (const auto& character : characters) {
		character->move();
	}
	colision.windowColision(); 

	updateStats();


}


