#pragma once
#include <vector>
#include "Character.h"

/**
*	Classe concreta gravidade
*
*	Aplica uma aceleração negativa no eixo Y em todas as entidades que são afetadas pela gravidade(projeteis e personagens)
*/
class Gravidade
{
	sf::Vector2f gravityForce;
	std::vector<Character*>* characters;
public:
	Gravidade(std::vector<Character*>* characters);
	void executar();
	void aplyGravity();
};

