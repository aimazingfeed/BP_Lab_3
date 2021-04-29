#pragma once
#include "Classes.h"

int main()
{
	Amphibian a(1, 1, 1, "name_a");
	Aeroterrial b(2, 2, 2, "name_b");
	cout << "First example: " << endl;
	a.movement();
	a.show();
	a.aquaticMethod();
	a.terrestrialMethod();

	cout << endl;
	cout << "Second example:" << endl;
	b.movement();
	b.show();
	b.aerialMethod();
	b.terrestrialMethod();
}