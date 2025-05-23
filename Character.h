#pragma once
#include "Entity.h"
class Character : public Entity
{
protected:
	int health; 
	int power;
	int jumps;
	//sf::FloatRect characterBounds;
	sf::Vector2f speed;
public:
	
	Character();
	Character(sf::Vector2f size, sf::Vector2f pos);
	~Character();


	void move();

	void changeSpeed(sf::Vector2f addSpeed);
	

	//referente a colisões com obstaculos
	virtual void hitTop(sf::FloatRect obstaculo);
	virtual void hitGround(sf::FloatRect obstaculo);
	virtual void hitLeft (sf::FloatRect obstaculo);
	virtual void hitRight(sf::FloatRect obstaculo);




	//referente a colisão com janela
	//virtual void hitTop();
	//virtual void hitRight();
	//virtual void hitLeft();
	//virtual void hitGround();
	//virtual const sf::FloatRect getBounds();

	virtual void resetCharacter();
	virtual void draw();
	virtual void update();
};

