#include "GerenciadorEstado.h"
GerenciadorEstado* GerenciadorEstado::pGerEstado = NULL;

GerenciadorEstado* GerenciadorEstado::getGerEstado()
{
	if (!pGerEstado)
		pGerEstado = new GerenciadorEstado();
	return pGerEstado;
}

GerenciadorEstado::GerenciadorEstado()
:Ente()
{
	push(new MenuPrincipal());
}

/*
void GerenciadorEstado::execute()
{
	while (pGerGraphic->isOpen()) {
		handleEvent();
		update();
		draw();

	}

}
*/


//oi

void GerenciadorEstado::handleEvent()
{
	if (!stack.empty()) {
		stack.back()->handleEvent();
	}
}

void GerenciadorEstado::update()
{
	if (stack.empty()) {
		pGerGraphic->getWindow()->close();
		return;
	}

		stack.back()->update();

		switch (stack.back()->getAction()) {
		case Actions::VOLTAR_1_MENU: {
			pop();
			break;
		}

		case Actions::FASE_1:{
			push(new Fase1());
			break;
		}
		case Actions::FASE_2: {
			push(new Fase2());
			break;
		}
		case Actions::VOLTAR_2_MENUS: {
			pop();
			pop();
			break;
		}
		case Actions::SELECIONAR_FASE: {
			push(new MenuSelectLvl());
			break;
		}
		case Actions::PAUSE: {
			push(new PauseState());
		}
		default:
			break;
			
		}

	
}

void GerenciadorEstado::draw()
{
	if(!stack.empty()){
		//stack.back()->draw();
		int i;
		
		for (i = 0; i < stack.size(); i++) {
			stack[i]->draw();
		}
	}
}

void GerenciadorEstado::pop()
{
	delete stack.back();
	stack.pop_back();

	if (!stack.empty())
		stack.back()->setAction(Actions::NADA);
}

void GerenciadorEstado::push(State* newState)
{
	stack.push_back(newState);
}

void GerenciadorEstado::clear()
{

	int i;
	
	for (i = stack.size()-1; i >= 0 ; i--) {
		delete (*stack.begin() + i);
		stack.pop_back();

	}
}


