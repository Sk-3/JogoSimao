#pragma once
#include "Obstaculo.h"
class Plataforma : public Obstaculo
{
private:
	float height;
	float width;
public:
	Plataforma(); 
	~Plataforma(); 
	virtual void obstacular();
	void draw();
	void update();
};

