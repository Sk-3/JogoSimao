#include "menuState.h"

menuState::~menuState()
{
}

menuState::menuState()
	:State()
{
}

void menuState::handleEvent()
{
	sf::Event ev;
	while(this->window->pollEvent(ev)){
		switch (ev.type) {
		case sf::Event::Closed:
		{
			setAction(Actions::VOLTAR_1_MENU);
		}
		case  sf::Event::KeyPressed:
		{
			if (ev.key.code == sf::Keyboard::Escape) {
				setAction(Actions::VOLTAR_1_MENU);
			}
			break;
		}
		case sf::Event::MouseButtonPressed:
		{
			if (ev.mouseButton.button == sf::Mouse::Left) {
				mouseClick();
			}
		}
		default:
			break;
		}
	}
}

void menuState::draw()
{
	window->clear();
	for (const auto& buttonv: buttonVector) {
		buttonv->draw();
	}

}

void menuState::update()
{

	//Se o action atual do bot�o for diferente de NADA, ent�o mudar o estado atual do estado pro estado do bot�o

	for (const auto& x : buttonVector) {
		if (x->getAction() != Actions::NADA) {

			this->setAction(x->getAction());
			x->setAction(Actions::NADA);
			
		}
	}
	pGerGraphic->updateMousePosition();
}

void menuState::mouseClick()
{
	for (const auto& x : buttonVector) {
		if (x->getClicked(mousePos)) {
			x->action();
		}
	}
}