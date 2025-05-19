#pragma once
#include "Character.h"
class Player2 : public Character
{
private:
	int jumps;
	sf::FloatRect playerBounds;
	static Player2* pPlayer;
	Player2();
	float maxSpeed;
public:
	static Player2* getPlayer();
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void dash();


	void stopAxisX();

	void hitTop();
	void hitRight();
	void hitLeft();
	void hitGround();

	const sf::FloatRect getBounds();

	void update();
	void draw();
	void resetPlayer();
};



