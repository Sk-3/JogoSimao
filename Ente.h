#pragma once
#include "GerenciadorGrafico.h"	
class Ente
{
protected:
	static sf::Clock* clock;
	int id;
	static GerenciadorGrafico* pGerGraphic;
public:
	Ente();
	void drawEnte(Ente* ente);
	virtual ~Ente();
};

