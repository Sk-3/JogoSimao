#pragma once
#include "Inimigo.h"
class Cachorro : public Inimigo
{
private:
public:
	Cachorro(sf::Vector2f size, sf::Vector2f pos);
	Cachorro();
	~Cachorro();
	void executar();

};

