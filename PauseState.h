#pragma once
#include "menuState.h"
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

