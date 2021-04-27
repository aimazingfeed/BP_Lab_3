#include "Classes.h"



Organism::Organism(int age) : m_age(age) {
}

Organism::Organism() {
}

void Organism::show() {

}

Aerial::Aerial(int wingsCount) : m_wingsCount(wingsCount) {
}

void Aerial::movement() {
	std::cout << "I am flying!" << std::endl;
}

void Aerial::show() {
	std::cout << m_wingsCount << std::endl;
}

Aquatic::Aquatic(int gillsCount) :m_gillsCount(gillsCount) {
}

void Aquatic::movement() {
	std::cout << "I am swimming!" << std::endl;
}

void Aquatic::show() {
	std::cout << m_gillsCount << std::endl;
}


Terrestrial::Terrestrial(int legsCount) : m_legsCount(legsCount) {
}

void Terrestrial::movement() {
	std::cout << "I am walking!" << std::endl;
}

void Terrestrial::show() {
	std::cout << m_legsCount << std::endl;
}



Aeroterrial::Aeroterrial(int age, int legsCount, int wingsCount) : Aerial(wingsCount), Terrestrial(legsCount) {
	Organism::m_age = age;
}


void Aeroterrial::movement() {
	::Aerial::movement();
	::Terrestrial::movement();
}

void Aeroterrial::show() {
	::Aerial::show();
	::Terrestrial::show();
}


Amphibian::Amphibian(int age, int legsCount, int gillsCount) :Aquatic(gillsCount), Terrestrial(legsCount) {
	Organism::m_age = age;
}


void Amphibian::movement() {
	::Aquatic::movement();
	::Terrestrial::movement();
}

void Amphibian::show() {
	::Aquatic::show();
	::Terrestrial::show();
}

