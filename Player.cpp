#include "Player.h"

Player::Player() {
	jumps = 2;
	position = sf::Vector2f(300.f, 0.f);

	maxSpeed = 6;
	shape.setSize(sf::Vector2f(100.f, 100.f));
	shape.setFillColor(sf::Color::Blue);
	shape.setPosition(position);
}
sf::Vector2f Player::getPosition()
{
	return shape.getPosition();
}

void Player::moveUp()
{
	if (jumps) {
		speed.y = -8;
		jumps--;
	}
	
	
}

void Player::moveDown()
{
	speed.y += 0.3;
}

void Player::moveLeft()
{
	if(speed.x >= -maxSpeed) {
		speed.x -= 0.4;
	}
}

void Player::moveRight()
{
	if (speed.x <= maxSpeed) {
		speed.x += 0.4;
	}
}

void Player::dash()
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

void Player::stopAxisX()
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

void Player::executar()
{
	//move o player a atualiza a posição da camera
	move();
}
