#pragma once
#include "Player2.h"
#include "Obstaculo.h"
#include "vector"
#include "Ente.h"
class GerenciadorColisao : public Ente
{
private:
	std::vector<Character*>* characters;
	std::vector<Obstaculo*>* obstaculos;
	Player2* ppPlayer;
public:


	GerenciadorColisao();
	GerenciadorColisao(std::vector<Character*>* characters, std::vector<Obstaculo*>*);
	~GerenciadorColisao();
	
	
	void colision();
	
};

