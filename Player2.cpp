#include "Player2.h"

Player2::Player2() {
	jumps = 2;
	position = sf::Vector2f(300.f, 0.f);

	maxSpeed = 6;
	shape.setSize(sf::Vector2f(100.f, 100.f));
	shape.setFillColor(sf::Color::Blue);
	shape.setPosition(position);
	entityBounds = shape.getGlobalBounds();
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

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		speed.x = -20;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		speed.x = 20;
	}
	else {
		speed.x = 0;
		speed.y = 0;
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

void Player2::resetPlayer()
{
	shape.setPosition(position);
	health = 10;
	speed = sf::Vector2f(0, 0);
}


void Player2::update() {
	entityBounds = shape.getGlobalBounds();
	//characterBounds = shape.getGlobalBounds();
}
Player2* Player2::pPlayer = NULL;