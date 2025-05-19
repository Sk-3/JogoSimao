#pragma once
#include "menuState.h"
class PauseState : public menuState
{
private:
	sf::RectangleShape box;
	Button* resume;
	Button* quit;

public:
	virtual void draw() override;
	PauseState();
	~PauseState();
};

