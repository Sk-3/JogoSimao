#pragma once
#include "menuState.h"
class MenuSelectLvl : public menuState
{
private:
	Button* level1;
	Button* level2;
public:
	MenuSelectLvl();
	~MenuSelectLvl();
};

