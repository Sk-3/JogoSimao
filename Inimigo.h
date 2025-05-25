#pragma once
#include "Character.h"
class Inimigo : public Character
{
private:
	int nivel_maldade;
public:
	Inimigo(sf::Vector2f size, sf::Vector2f pos);
	Inimigo();
	~Inimigo();
	virtual void executar() = 0; 
};

