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
	virtual void mouseClick();
	virtual void draw() override;
	virtual void update() override;

	virtual void updateCont();
	virtual void updateEnemies();
};

