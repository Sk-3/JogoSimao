#pragma once
#include "Entity.h"
class Character : public Entity
{
protected:
	int health; 
	int power;
	int jumps;
	sf::Vector2f speed;
public:
	//construtor padrão
	Character();
	//define posição e tamanho inicial do personagem
	Character(sf::Vector2f size, sf::Vector2f pos);
	~Character();

	void move();

	void changeSpeed(sf::Vector2f addSpeed);
	
	//Funções que não permitem o jogador entrar dentro do obstaculo passado como parametro
	virtual void hitTop(sf::FloatRect obstaculo);
	//se atinge o chão, é movido pra cima, e assim é com todas as outras funções
	virtual void hitGround(sf::FloatRect obstaculo);
	virtual void hitLeft (sf::FloatRect obstaculo);
	virtual void hitRight(sf::FloatRect obstaculo);

	virtual void executar() = 0;
};

