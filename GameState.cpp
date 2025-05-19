#include "GameState.h"
#include <iostream>

GameState::GameState():
	State()
{
	player = Player::getPlayer();
	stats.setFont(*pGerGraphic->getFont());
	stats.setCharacterSize(23);
	
}


GameState::~GameState() {

	player->resetPlayer();
}

void GameState::updateStats()
{
	std::ostringstream str;
	str << "Health: " << player->getHealth() << "\nPoints: " << player->getPoints() << "\nStreak: " << player->getStreak();
	stats.setString(str.str());

}

void GameState::mouseClick()
{
}

void GameState::handleEvent()
{
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

