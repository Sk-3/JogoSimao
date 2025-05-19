#include "Principal.h"

Principal::Principal()
	:gerGraphic( GerenciadorGrafico::getGerGraphic()),
	gerEstado(GerenciadorEstado::getGerEstado())
{
	gerGraphic->setFrameLimit(60);
	
}

Principal::~Principal()
{
	delete gerGraphic;
	delete gerEstado;
}

void Principal::executar() {
	
	while (gerGraphic->isOpen()) {
		gerEstado->handleEvent();
		gerEstado->update();
		gerEstado->draw();
		gerGraphic->display();
	}
}