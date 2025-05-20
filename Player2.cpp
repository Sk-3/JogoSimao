#include "Player2.h"

Player2::Player2() {
	jumps = 2;
	position = sf::Vector2f(300.f, 0.f);

	maxSpeed = 6;
	shape.setSize(sf::Vector2f(100.f, 100.f));
	shape.setFillColor(sf::Color::Blue);
	shape.setPosition(position);
	playerBounds = shape.getGlobalBounds();
}
Player2* Player2::getPlayer()
{
	if (!pPlayer) {
		pPlayer = new Player2();
	}
	return pPlayer;
}

void Player2::moveUp()
{
	if (jumps) {
		speed.y = -8;
		jumps--;
	}
	
	
}

void Player2::moveDown()
{
	speed.y += 0.3;
}


void Player2::moveLeft()
{
	if(speed.x >= -maxSpeed) {
		speed.x -= 0.4;
	}
}

void Player2::moveRight()
{
	if (speed.x <= maxSpeed) {
		speed.x += 0.4;
	}
}

void Player2::dash()
{
	if (speed.x >= 0) {
		speed.x = 20;
	}
	else {
		speed.x = -20;
	}
}

void Player2::stopAxisX()
{
	if (speed.x > maxSpeed) {
		speed.x -= 0.4;
	}
	else if (speed.x < -maxSpeed) {
		speed.x += 0.4;
	}

	if (speed.x != 0) {
		if (speed.x >= 0) {
			if (speed.x - 0.2 < 0) {
				speed.x = 0;
			}else{
				speed.x -= 0.2;
			}
		}
		else {
			if (speed.x + 0.2 > 0) {
				speed.x = 0;
			}
			speed.x += 0.2;
		}
	}
}
void Player2::hitTop()
{
	
	shape.setPosition(playerBounds.left, 0.f);
	speed.y = 0;
	
}
void Player2::hitRight()
{
	jumps = 1;
	shape.setPosition(pGerGraphic->getWindow()->getSize().x - playerBounds.width, playerBounds.top + speed.y);
	speed.x = 0;
}
void Player2::hitLeft() {
	jumps = 1;
	shape.setPosition(0.f, playerBounds.top + speed.y);
	speed.x = 0; 
}
void Player2::hitGround()
{
	
	jumps = 2;
	speed.y = 0; 
	shape.setPosition(playerBounds.left + speed.x, pGerGraphic->getWindow()->getSize().y - playerBounds.height);
}

void Player2::resetPlayer()
{
	shape.setPosition(position);
	health = 10;
	speed = sf::Vector2f(0, 0);
}
const sf::FloatRect Player2::getBounds() {
	return playerBounds; 
}

void Player2::update() {
	playerBounds = shape.getGlobalBounds();
}
Player2* Player2::pPlayer = NULL;