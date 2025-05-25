#include "PauseState.h"
PauseState::PauseState()
{
	resume = new Button("resume", sf::Vector2f(300.f, 300.f), Actions::VOLTAR_1_MENU);
	quit = new Button("Quit", sf::Vector2f(300.f, 400.f), Actions::VOLTAR_2_MENUS);

	buttonVector.push_back(quit);
	buttonVector.push_back(resume);
}

PauseState::~PauseState() {
	delete resume;
	delete quit;
}