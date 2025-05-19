#pragma once
#include <SFML/Graphics.hpp>
#include "Actions.h"
#include "Ente.h"
#include <vector>
#include "PauseState.h"
#include "Fase1.h"
#include "Fase2.h"
#include "MenuPrincipal.h"
#include "MenuSelectLvl.h"

class GerenciadorEstado : public Ente
{
private:
	static GerenciadorEstado* pGerEstado;
	sf::RenderWindow* window;
	std::vector<State*> stack;
public:
	static GerenciadorEstado* getGerEstado();
	GerenciadorEstado();
	void handleEvent();
	void update();
	void draw();

	void pop();
	void push(State* newState);
	void clear();

};

