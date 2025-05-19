#pragma once
#include "GameState.h"
#include "Player2.h"
#include <vector>
#include "Gravidade.h"
#include "Plataforma.h"
#include "GerenciadorColisao.h"
class Fase2 : public GameState
{
private:
	GerenciadorColisao colision;
	Player2* pPlayer2;
	std::vector<Character*> characters;
	Gravidade gravity; 
public:

	Fase2();
	~Fase2();
	void draw();
	void update();
	void handleEvent() override;
};

