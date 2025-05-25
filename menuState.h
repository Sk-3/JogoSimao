#pragma once
#include "State.h"
#include "Button.h"
#include <vector>
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

