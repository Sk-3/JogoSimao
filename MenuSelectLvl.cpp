#include "MenuSelectLvl.h"

MenuSelectLvl::MenuSelectLvl()
	:menuState()
{
	level1 = new Button("Level 1", sf::Vector2f(200.f, 300.f), Actions::FASE_1);
	level2 = new Button("Level 2", sf::Vector2f(200.f, 400.f), Actions::FASE_2);
	buttonVector.push_back(level1);
	buttonVector.push_back(level2);
}

MenuSelectLvl::~MenuSelectLvl()
{
	delete level1;
	delete level2;
}
