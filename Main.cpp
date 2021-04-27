#pragma once
#include "Classes.h"

int main()
{
	Amphibian a(1, 1, 1, "name_a");
	Aeroterrial b(2, 2, 2, "name_b");
	a.movement();
	a.show();
	b.movement();
	b.show();
}