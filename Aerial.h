#pragma once
#include "Organism.h"
class Aerial:public Organism
{
protected:
	void movement() override;
public:
	int m_wingsCount;
};

