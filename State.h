#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"
#include "Actions.h"


class State : public Ente
{
protected:
	sf::View* view;
	Actions action2;
	sf::RenderWindow* window;
	sf::Font* font;
	sf::Vector2i* mousePos;
public:
	State();
	virtual ~State();
	const Actions getAction() const;
	void setAction(Actions action);
	
	virtual void handleEvent() = 0;
	virtual void executar() = 0;

};

