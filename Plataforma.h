#pragma once
#include "Obstaculo.h"
/**
*	Felipe Simbalista: 25/05/2025
* 
*	Classe concreta Plataforma
*
*	
*/

class Plataforma : public Obstaculo
{
private:

public:
	Plataforma(sf::Vector2f size, sf::Vector2f pos);
	Plataforma(); 
	~Plataforma(); 
	virtual void obstacular(Player* pPlayer);
	void executar();
};



