#include "Button.h"

Button::Button(std::string txt, sf::Vector2f pos, Actions action)
	:buttonAction(action), actualAction(Actions::NADA),
	Ente()
{
	
	buttonRect.setSize(sf::Vector2f(200.f, 30.f));

	buttonRect.setPosition(pos);
	buttonText.setPosition(pos);

	buttonText.setFont(*(pGerGraphic->getFont()));
	buttonText.setString(txt);
	buttonText.setCharacterSize(30);

}
Button::~Button() {

}
sf::RectangleShape Button::getRectangle()
{
	return buttonRect;
}


void Button::action()
{
	actualAction = buttonAction;
}

void Button::executar()
{
	pGerGraphic->getWindow()->draw(buttonText);
}

bool Button::getClicked(sf::Vector2i* mousePos)
{
	/*sf::Vector2f mouse;
	mouse.x = (float)mousePos->x;
	mouse.y = (float)mousePos->y;*/
	return buttonRect.getGlobalBounds().contains(sf::Vector2f((float)mousePos->x, (float)mousePos->y));
}

const Actions Button::getAction() {
	return actualAction;
}

void Button::setAction(Actions act) {
	actualAction = act;
}
