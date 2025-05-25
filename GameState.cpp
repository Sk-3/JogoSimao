#include "GameState.h"

GameState::GameState():
	State(), gravity(&characters),
	colision(&characters, &obstaculos),
	player(new Player()), view(pGerGraphic->getStdView())
{
	pGerGraphic->getWindow()->setView(view);
	characters.push_back(player);
}


GameState::~GameState() {
	for (auto& obstacul : obstaculos) {
		delete obstacul;
	}
	for (auto& charact : characters) {
		delete charact;
	}
}

