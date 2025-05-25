#pragma once
#include "Entity.h"
#include "Player.h"
class Obstaculo : public Entity
{
protected:
	bool isColiding;
	bool danoso;
public:
	Obstaculo(sf::Vector2f size, sf::Vector2f pos);
	Obstaculo();
	~Obstaculo();
	void setIsColiding(bool col);
	virtual void obstacular(Player* pPlayer) = 0;
	virtual void executar() = 0; 
};

