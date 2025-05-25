#pragma once
#include "GameState.h"
#include "Inimigo.h"

class Fase2 : public GameState
{
private:

public:

	Fase2();
	~Fase2();
	void executar();
	void handleEvent() override;
};

