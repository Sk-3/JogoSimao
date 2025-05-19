#pragma once
#include "Player2.h"
#include "Obstaculo.h"
#include "vector"
#include "Ente.h"
class GerenciadorColisao : public Ente
{
private:
	Player2* pPlayer;
public:
	GerenciadorColisao();
	~GerenciadorColisao();
	void windowColision();
};

