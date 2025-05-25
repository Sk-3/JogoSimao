#pragma once
#include <SFML/Graphics.hpp>
#include "GerenciadorEstado.h"
#include "Ente.h"

/**
* Classe principal
*	Chamada pela main
*
*	executa o gerenciador de estados
*
**/
class Principal
{
private:
	GerenciadorGrafico* gerGraphic;
	GerenciadorEstado* gerEstado;

public:
	Principal();
	~Principal();
	void executar();
};

