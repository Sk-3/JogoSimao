#pragma once
#include "menuState.h"
/**
*	Classe concreta PauseState
*
*	Instancia botões para voltar pro jogo e para sair do jogo
* 
*/

class PauseState : public menuState
{
private:
	sf::RectangleShape box;
	Button* resume;
	Button* quit;

public:
	PauseState();
	~PauseState();
};

