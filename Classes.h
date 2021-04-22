#include <iostream>
class Organism
{
public:
	int m_age;
	virtual void movement() = 0;
	Organism(int);
	Organism();
};

class Aerial : virtual public Organism
{
protected:
	void movement() override;
public:
	int m_wingsCount;
	Aerial(int);
};

class Aquatic : virtual public Organism
{
protected:
	void movement() override;
public:
	int m_gillsCount;
	Aquatic(int);
};

class Terrestrial : virtual public Organism
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
	virtual void movement() override;

	Amphibian(int, int, int);

};

class Aeroterrial : public Aerial, public Terrestrial
{
public:
	virtual void movement() override;
	
	Aeroterrial(int, int, int);

};
