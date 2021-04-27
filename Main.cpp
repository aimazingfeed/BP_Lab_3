#pragma once
#include "Classes.h"

int main()
{
	Amphibian a(1, 1, 1);
	Aeroterrial b(2, 2, 2);
	a.movement();
	a.show();
	b.movement();
	b.show();
}