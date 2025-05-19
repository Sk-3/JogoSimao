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
	virtual void handleEvent() override;
	virtual void draw() override;
	virtual void update() override;
	virtual void mouseClick();

};

