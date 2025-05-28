#pragma once
#include "State.h"
#include "Player.h"
#include "Gravidade.h"
#include "Plataforma.h"
#include "Projetil.h"
#include "GerenciadorColisao.h"
#include "Hud.h"
#include <sstream>

/**
*	Felipe Simbalista: 25/05/2025
* 
*	Classe abstrata GameState
*	Responsável por criar vetores de entidades para que suas classes filhas possam instanciar entidades
* 
*	Cria também um gerenciador de gravidade e um gerenciador de colisões
*
*	
*/

class GameState : public State
{
protected:
	sf::View view;
	GerenciadorColisao colision;
	Gravidade gravity;
	Player* player2;
	Player* player;
	Hud hud;
	std::vector<Entity*> entidades;
	std::vector<Projetil*> projeteis;
	std::vector<Obstaculo*> obstaculos;
	std::vector<Character*> characters;
public:
	~GameState();
	GameState();
	virtual void handleEvent();
	void dispararProjetil(Character* character);
	virtual void executar() = 0;
	void removerProjeteis();
	void removerPersonagens();
};
