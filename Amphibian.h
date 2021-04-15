#pragma once
#include "Aquatic.h"
#include "Terrestrial.h"
class Amphibian : public Aquatic, public Terrestrial
{
public:
	void swim();
	void walk();
};

