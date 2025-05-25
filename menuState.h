#pragma once
#include "State.h"
#include "Button.h"
#include <vector>
/**
*	Classe abstrata menuState
*
*	cria um vetor de botões para suas classes filhas instanciar botões nele
* 
*	Classe responsável por ler as ações dos botões e mudar a ação do estado caso o botão seja clicado
*/
class menuState : public State
{
protected:
	std::vector<Button*> buttonVector;
	
public:
	virtual ~menuState();
	menuState();


	void readButtons();
	void execButtons();
	virtual void handleEvent();
	virtual void executar();
	virtual void mouseClick();

};

