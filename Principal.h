#pragma once
#include <SFML/Graphics.hpp>
#include "GerenciadorEstado.h"
#include "Ente.h"
class Principal
{
private:

	sf::RenderWindow* window;
	GerenciadorGrafico* gerGraphic;
	GerenciadorEstado* gerEstado;

public:
	Principal();
	~Principal();
	void executar();
};

