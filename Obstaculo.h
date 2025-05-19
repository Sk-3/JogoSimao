#pragma once
#include "Entity.h"
#include "Player2.h"
class Obstaculo : public Entity
{
protected:
	bool danoso;
public:
	Obstaculo();
	~Obstaculo();
	virtual void obstacular(Player2* pPlayer) = 0;
};

