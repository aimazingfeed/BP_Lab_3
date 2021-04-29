#include "Classes.h"



Organism::Organism(int age, string name) : m_age(age), m_name(name) {
}

Organism::Organism() {
}

Organism::~Organism(){
}

void Organism::show() {
	std::cout << m_name << std::endl;
}

Aerial::Aerial(int wingsCount) : m_wingsCount(wingsCount) {
}

void Aerial::aerialMethod() {
	cout << "Aerial method" << endl;
}

void Aerial::movement() {
	std::cout << "I am flying!" << std::endl;
}

void Aerial::show() {
	std::cout << m_wingsCount << std::endl;

}

Aquatic::Aquatic(int gillsCount) :m_gillsCount(gillsCount) {
}

void Aquatic::aquaticMethod() {
	cout << "Aquatic method" << endl;
}

void Aquatic::movement() {
	std::cout << "I am swimming!" << std::endl;
}

void Aquatic::show() {
	std::cout << m_gillsCount << std::endl;
	
}


Terrestrial::Terrestrial(int legsCount) : m_legsCount(legsCount) {
}

void Terrestrial::terrestrialMethod() {
	cout << "Terrestrial method" << endl;
}

void Terrestrial::movement() {
	std::cout << "I am walking!" << std::endl;
}

void Terrestrial::show() {
	std::cout << m_legsCount << std::endl;
	
}



Aeroterrial::Aeroterrial(int age, int legsCount, int wingsCount, string name) : Aerial(wingsCount), Terrestrial(legsCount) {
	Organism::m_age = age;
	Organism::m_name = name;
}


void Aeroterrial::movement() {
	::Aerial::movement();
	::Terrestrial::movement();
}

void Aeroterrial::show() {
	::Aerial::show();
	::Terrestrial::show();
	::Organism::show();
}


Amphibian::Amphibian(int age, int legsCount, int gillsCount, string name) :Aquatic(gillsCount), Terrestrial(legsCount) {
	Organism::m_age = age;
	Organism::m_name = name;
}


void Amphibian::movement() {
	::Aquatic::movement();
	::Terrestrial::movement();
}

void Amphibian::show() {
	::Aquatic::show();
	::Terrestrial::show();
	::Organism::show();
}

