#pragma once
#include "Ente.h"
#include "sstream"
#include "Player.h"
class Hud : public Ente
{
private:
	sf::Clock hudClock;
	Player* player;
	sf::Text hud;
public:
	Hud();
	~Hud();
	void setPlayer(Player* player);
	void draw();
	void executar();


};

