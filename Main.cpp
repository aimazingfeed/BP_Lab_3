#pragma once
#include "Classes.h"

int main()
{
	Amphibian a(1,1,1);
	a.movement();
	std::cout << a.m_age << std::endl << std::endl;

	Aeroterrial b(2, 2, 2);
	b.movement();
	std::cout << b.m_age <<std::endl << std::endl;
}