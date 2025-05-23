#pragma once
#include "Character.h"
class Player2 : public Character
{
private:
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

	/*void hitTop() override;
	void hitRight() override;
	void hitLeft() override;
	void hitGround() override;*/

	void update() override;
	void resetPlayer();
};



