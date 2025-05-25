#pragma once
#include <vector>
#include "Character.h"

/**
*	Felipe Simbalista: 25/05/2025
* 
*	Classe concreta gravidade
*
*	Aplica uma acelera��o negativa no eixo Y em todas as entidades que s�o afetadas pela gravidade(projeteis e personagens)
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

