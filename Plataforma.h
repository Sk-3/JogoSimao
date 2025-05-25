#pragma once
#include "Obstaculo.h"
/**
*	Classe concreta Plataforma
*
*	
*/

class Plataforma : public Obstaculo
{
public:
	Plataforma(sf::Vector2f size, sf::Vector2f pos);
	Plataforma(); 
	~Plataforma(); 
	virtual void obstacular(Player* pPlayer);
	void executar();
};



