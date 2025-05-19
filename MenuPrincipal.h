#pragma once
#include "menuState.h"
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

