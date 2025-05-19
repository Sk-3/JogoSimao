#pragma once
#include "Entity.h"
class Character : public Entity
{
protected:
	int health; 
	int power;

	sf::Vector2f speed;
public:
	
	void move();

	sf::RectangleShape getShape(); 

	void changeSpeed(sf::Vector2f addSpeed);
	Character();
	~Character();

	virtual void draw();
	virtual void update();
};

