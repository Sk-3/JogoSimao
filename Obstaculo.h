#pragma once
#include "Entity.h"
#include "Player2.h"
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
	virtual void update() override;
	virtual void obstacular(Player2* pPlayer) = 0;
};

