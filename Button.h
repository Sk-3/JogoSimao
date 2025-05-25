#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "Ente.h"
#include <iostream>
#include "Actions.h"

/**
*	Classe responsável por criar botões e gerenciar suas ações
*	Classe agregada aos menus
*	seu atributo buttonAction é responsável por dizer qual ação ele vai tomar quando clicado
*	seu atributo actualAction vai ser lido pelo menuState, quando ele for clicado ele vai mudar de "NADA" para a ação de buttonAction
*/

class Button : public Ente
{
private:
	sf::RectangleShape buttonRect;
	sf::Text buttonText;
	Actions buttonAction;
	Actions actualAction;
	
public:
	Button(std::string txt = "", sf::Vector2f pos = sf::Vector2f(0.0f, 0.0f), Actions action = Actions::NADA);
	~Button();

	virtual bool getClicked(sf::Vector2i* mousePos);
	const Actions getAction();
	void setAction(Actions act);
	sf::RectangleShape getRectangle();

	void action();

	void executar();
};

