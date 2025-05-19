#pragma once
#include "Ente.h"

class Player : public Ente
{
private:
	int points;
	int streak;
	int health;
	static Player* pPlayer;
	Player();
public:
	static Player* getPlayer();
	void resetPlayer();
	bool isAlive();
	void resetStreak();
	void getHit();
	void increasePoints();
	const int getHealth();
	const int getStreak();
	const int getPoints();

	~Player();
};

