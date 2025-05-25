#pragma once
#include "Player.h"
#include "Obstaculo.h"
#include "vector"
#include "Ente.h"
class GerenciadorColisao : public Ente
{
private:
	std::vector<Character*>* characters;
	std::vector<Obstaculo*>* obstaculos;
public:

	void executar();
	GerenciadorColisao();
	GerenciadorColisao(std::vector<Character*>* characters, std::vector<Obstaculo*>*);
	~GerenciadorColisao();
	
	
	void colision();
	
};

