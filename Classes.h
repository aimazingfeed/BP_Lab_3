#include <iostream>
using namespace std;
class Organism
{
public:
	int m_age;
	string m_name;
	virtual void movement() = 0;
	virtual void show();
	Organism(int, string);
	Organism();
};

class Aerial : virtual public Organism
{
protected:
	void movement() override;
	virtual void show() override;
public:
	int m_wingsCount;
	Aerial(int);
};

class Aquatic : virtual public Organism
{
protected:
	void movement() override;
	virtual void show() override;
public:
	int m_gillsCount;
	Aquatic(int);
};

class Terrestrial : virtual public Organism
{
protected:
	void movement() override;
	virtual void show() override;
public:
	int m_legsCount;
	Terrestrial(int);
};

class Amphibian : public Aquatic, public Terrestrial
{
public:
	virtual void movement() override;
	virtual void show() override;
	Amphibian(int, int, int, string);

};

class Aeroterrial : public Aerial, public Terrestrial
{
public:
	virtual void movement() override;
	virtual void show() override;
	Aeroterrial(int, int, int, string);

};
