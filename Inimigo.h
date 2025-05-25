#pragma once
#include "Character.h"

/**
*	Felipe Simbalista: 25/05/2025
*	Classe abstrata inimigo
*/
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

