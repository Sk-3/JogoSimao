#pragma once
#include "State.h"
#include "Player.h"
#include "Gravidade.h"
#include "Plataforma.h"
#include "GerenciadorColisao.h"
#include <sstream>

class GameState : public State
{
protected:
	sf::View view;
	
	GerenciadorColisao colision;
	Gravidade gravity;
	
	Player* player;
	std::vector<Obstaculo*> obstaculos;
	std::vector<Character*> characters;
	
public:
	~GameState();
	GameState();
	virtual void handleEvent() = 0;
	virtual void executar() = 0;
};
