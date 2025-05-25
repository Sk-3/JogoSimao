#pragma once
#include "GameState.h"
#include "Inimigo.h"

/**
* Classe concreta Fase2
* 
*	Derivada de GameState, fase2 � respons�vel por instanciar entidades e aloca-los nos vetores obstaculos/characters/projeteis
* 
*	O controle dessas entidades se da pelos m�todos de GameState
*/

class Fase2 : public GameState
{
private:

public:
	Fase2();
	~Fase2();
	void executar();
	void handleEvent() override;
};

