#pragma once
#include "State.h"
#include "Player.h"
#include "Gravidade.h"
#include "Plataforma.h"
#include "GerenciadorColisao.h"
#include <sstream>

/**
*	Felipe Simbalista: 25/05/2025
* 
*	Classe abstrata GameState
*	Respons�vel por criar vetores de entidades para que suas classes filhas possam instanciar entidades
* 
*	Cria tamb�m um gerenciador de gravidade e um gerenciador de colis�es
*
*	
*/

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
