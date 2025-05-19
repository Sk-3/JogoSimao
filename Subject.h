#pragma once
#include "Observer.h"
class Subject
{
public:
	virtual ~Subject();
	virtual void Attach(Observer*);
	virtual void Detach(Observer*);
};

