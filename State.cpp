#include "State.h"
State::State()
:Ente()
{
	//this->gerEstado = gerEstado;
	action2 = Actions::NADA;
	window = pGerGraphic->getWindow();
	font = pGerGraphic->getFont();
	mousePos = pGerGraphic->getMousePosition();
}

State::~State() {
	
}

const Actions State::getAction() const{
	return action2;
}

void State::setAction(Actions action)
{
	this->action2 = action;
}
