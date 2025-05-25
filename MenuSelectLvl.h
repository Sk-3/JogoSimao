#pragma once
#include "menuState.h"

/**
*	Classe concreta menuPrincipal
*
*	Instancia bot�es para selecionar o nivel que deseja jogar
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

