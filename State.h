#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"
#include "Actions.h"


class State : public Ente
{
protected:
	Actions action2;
	sf::RenderWindow* window;
	sf::Font* font;
	sf::Vector2i* mousePos;
public:
	State();
	const Actions getAction() const;
	void setAction(Actions action);
	virtual ~State();
	virtual void handleEvent() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;

};

