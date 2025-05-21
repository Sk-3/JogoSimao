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

	sf::RectangleShape getShape(); 
	void changeSpeed(sf::Vector2f addSpeed);
	
	virtual void hitTop();
	virtual void hitRight();
	virtual void hitLeft();
	virtual void hitGround();
	//virtual const sf::FloatRect getBounds();

	virtual void resetCharacter();
	virtual void draw();
	virtual void update();
};

