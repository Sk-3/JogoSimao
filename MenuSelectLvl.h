#pragma once
#include "menuState.h"

/**
*	Classe concreta menuPrincipal
*
*	Instancia botões para selecionar o nivel que deseja jogar
*/
class MenuSelectLvl : public menuState
{
private:
	Button* level1;
	Button* level2;
public:
	MenuSelectLvl();
	~MenuSelectLvl();
};

