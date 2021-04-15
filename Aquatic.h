#pragma once
#include "Organism.h"
class Aquatic:public Organism
{
protected:
	void movement() override;
public:
	int m_gillsCount;
};

