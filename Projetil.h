#pragma once
#include "Entity.h"
class Projetil :public Entity
{
private:
	bool ativo;
public:
	Projetil(sf::Vector2f size, sf::Vector2f pos, Directions direction);
	Projetil();
	~Projetil();
	void executar();

};

