#pragma once
#include "State.h"
#include "cuboNormal.h"
#include "Player.h"
#include <sstream>

class GameState : public State
{
protected:
	sf::Text stats;
	Player* player;
public:
	~GameState();
	GameState();
	virtual void updateStats();
	virtual void mouseClick();
	virtual void handleEvent() override;
	virtual void draw() = 0;
	virtual void update() = 0;

};
