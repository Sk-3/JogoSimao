#pragma once
#include "menuState.h"
/**
*	Classe concreta menuPrincipal
* 
*	Instancia bot�es para come�ar o jogo, sair do jogo e para ver o ranking atual
*/

class MenuPrincipal : public menuState
{
private:
	Button* start;
	Button* quit;
	Button* ranking;
public:
	MenuPrincipal();
	~MenuPrincipal();
};

