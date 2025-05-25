#pragma once
#include "GerenciadorGrafico.h"	

/**
* Classe abstrata Ente
* 
* Respons�vel por definir um gerenciador gr�fico global para todos os Entes da aplica��o
* fazendo com que todos realizem a��es sempre na mesma janela
* todo ter� um clock para fins de controle de tempo
*/
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

	virtual void executar() = 0;
};

