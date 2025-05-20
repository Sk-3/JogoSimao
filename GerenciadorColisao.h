#pragma once
#include "Player2.h"
#include "Obstaculo.h"
#include "vector"
#include "Ente.h"
class GerenciadorColisao : public Ente
{
private:
	std::vector<Character*>* characters;
	Player2* ppPlayer;
public:
	GerenciadorColisao();
	GerenciadorColisao(std::vector<Character*>* characters);
	~GerenciadorColisao();
	void windowColision();
};

