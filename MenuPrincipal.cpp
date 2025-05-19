#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal()
	:menuState()
{
	start = new Button("Start game", sf::Vector2f(200.f, 300.f), Actions::SELECIONAR_FASE);
	quit = new Button("Quit game", sf::Vector2f(200.f, 400.f), Actions::VOLTAR_1_MENU);
	ranking = new Button("Ranking", sf::Vector2f(200.f, 500.f), Actions::VOLTAR_1_MENU);


	buttonVector.push_back(start);
	buttonVector.push_back(quit);
	buttonVector.push_back(ranking);
}

MenuPrincipal::~MenuPrincipal()
{
	delete start;
	delete quit;
	delete ranking;
}
