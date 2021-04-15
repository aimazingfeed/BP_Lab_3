#pragma once
#include "Aerial.h"
#include "Terrestrial.h"
class Aquaterrial:public Aerial, public Terrestrial
{
public:
	void fly();
	void walk();
};

