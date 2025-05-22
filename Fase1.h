#pragma once
#include "GameState.h"
class Fase1 : public GameState
{
private:
	int contador;
	std::vector<cubo*> enemies;
public:
	Fase1();
	~Fase1();

	void updateStats();
	void mouseClick();
	void draw() override;
	void update() override;

	void updateCont();
	void updateEnemies();
};

