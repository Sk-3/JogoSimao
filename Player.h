#pragma once
#include "Character.h"
class Player : public Character
{
private:
	
	
	float maxSpeed;
	sf::Vector2f center;
public:
	Player();
	
	sf::Vector2f getPosition();
	
	//Adicionam velocidade ao vetor de velocidade do jogador
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();


	void dash();
	void stopAxisX();
	void executar(); 
	void resetPlayer();
};



