#include "Fase1.h"
Fase1::Fase1()
	:GameState()
{
	contador = 60;
}

Fase1::~Fase1()
{
	for (int i = 0; i < enemies.size(); i++) {
		delete enemies[i];
	}
}

void Fase1::updateStats()
{
	std::ostringstream str;
	str << "Health: " << player->getHealth() << "\nPoints: " << player->getPoints() << "\nStreak: " << player->getStreak();
	stats.setString(str.str());

}

void Fase1::mouseClick()
{
	bool hitEnemie = false;
	for (int i = enemies.size() - 1; i >= 0; i--) {
		if (enemies[i]->getClicked(mousePos)) {
			delete enemies[i];
			enemies.erase(enemies.begin() + i);
			player->increasePoints();
			hitEnemie = true;
		}
	}

	if (!hitEnemie) {
		player->resetStreak();
	}
}

void Fase1::draw()
{
	window->clear();

	for (int i = 0; i < enemies.size(); i++) {
		enemies[i]->draw();
	}
	window->draw(stats);
}

void Fase1::update()
{
	if (!player->isAlive()) {
		player->resetPlayer();
		setAction(Actions::NADA);
	}
	updateStats();
	updateCont();
	pGerGraphic->updateMousePosition();
	updateEnemies();

}

void Fase1::updateCont()
{
	contador++;
	if (contador == 70) {
		contador = 0;
		enemies.push_back(new cuboNormal());
	}
}

void Fase1::updateEnemies()
{
	for (size_t i = 0; i < enemies.size(); i++)
	{
		enemies[i]->update();
		if (enemies[i]->getPosition().y > pGerGraphic->getWindow()->getSize().y) {
			delete enemies[i];
			enemies.erase((enemies.begin() + i));
			player->getHit();
			player->resetStreak();
		}
	}
}
