#include <iostream>
using namespace std;
class Organism
{
protected:
	int m_age;
	string m_name;
public:
	virtual void movement() = 0;
	virtual void show();
	Organism(int, string);
	Organism();
	~Organism();
};

class Aerial : virtual public Organism
{
protected:
	void movement() override;
	virtual void show() override;
	int m_wingsCount;
public:
	void aerialMethod();
	Aerial(int);
};

class Aquatic : virtual public Organism
{
protected:
	void movement() override;
	virtual void show() override;
	int m_gillsCount;
public:
	void aquaticMethod();
	Aquatic(int);
};

class Terrestrial : virtual public Organism
{
protected:
	void movement() override;
	virtual void show() override;
	int m_legsCount;
public:
	void terrestrialMethod();
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
