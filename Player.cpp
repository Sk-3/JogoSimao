#include "Player.h"

Player* Player::pPlayer = NULL;


Player::Player():
	Ente()
{
	health = 10;
	points = 0;
	streak = 1;
}

Player::~Player()
{
}


Player* Player::getPlayer()
{
	if (!Player::pPlayer) {
		pPlayer = new Player();
	}
	return pPlayer;
}
void Player::resetPlayer()
{
	health = 10;
	points = 0;
	streak = 1;
	

}
bool Player::isAlive()
{
	if (health <= 0) {
		return 0;
	}
	return 1;
}
void Player::resetStreak()
{
	streak = 1;
}

void Player::getHit()
{
	health -= 10;
}


void Player::increasePoints()
{
	points += streak;
	streak++;
}

const int Player::getHealth()
{
	return health;
}

const int Player::getStreak()
{
	return streak;
}

const int Player::getPoints()
{
	return points;
}

