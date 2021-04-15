#include "Amphibian.h"
void Amphibian::swim()
{
	::Aquatic::movement();
}
void Amphibian::walk()
{
	::Terrestrial::movement();
}