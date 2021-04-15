#pragma once
#include "Organism.h"
class Terrestrial:public Organism
{
protected:
	void movement() override;
public:
	int m_legsCount;
};

