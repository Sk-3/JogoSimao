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
	//construtor padr�o
	Character();
	//define posi��o e tamanho inicial do personagem
	Character(sf::Vector2f size, sf::Vector2f pos);
	~Character();

	void move();

	void changeSpeed(sf::Vector2f addSpeed);
	
	//Fun��es que n�o permitem o jogador entrar dentro do obstaculo passado como parametro
	virtual void hitTop(sf::FloatRect obstaculo);
	//se atinge o ch�o, � movido pra cima, e assim � com todas as outras fun��es
	virtual void hitGround(sf::FloatRect obstaculo);
	virtual void hitLeft (sf::FloatRect obstaculo);
	virtual void hitRight(sf::FloatRect obstaculo);

	virtual void executar() = 0;
};

