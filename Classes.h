#include <iostream>
class Organism
{
public:
	int m_age;
	virtual void movement() = 0;
	Organism(int);
	Organism();
};

class Aerial :public Organism
{
protected:
	void movement() override;
public:
	int m_wingsCount;
	Aerial(int);
};

class Aquatic :public Organism
{
protected:
	void movement() override;
public:
	int m_gillsCount;
	Aquatic(int);
};

class Terrestrial :public Organism
{
protected:
	void movement() override;
public:
	int m_legsCount;
	Terrestrial(int);
};

class Amphibian : public Aquatic, public Terrestrial
{
public:
	void swim();
	void walk();
	int m_age = Organism::m_age;
	Amphibian(int, int, int);

};

class Aeroterrial :public Aerial, public Terrestrial
{
public:
	void fly();
	void walk();
	int m_age = Organism::m_age;
	Aeroterrial(int, int, int);

};
