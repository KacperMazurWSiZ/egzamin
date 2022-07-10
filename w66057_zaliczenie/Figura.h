
#include <iostream>
#include <string>


using namespace std;

class Figura
{
private:
	string nazwa;
	string kolor;
	float wysokosc = 0;
	float szerokosc= 0;
public:
	Figura();
	Figura(float wysokosc);
	Figura(float wysokosc, string kolor);
	Figura(string nazwa, float wyskosc, float szerokosc, string kolor);
	bool operator ==(Figura& f1);
	friend ostream& operator <<(ostream& out, Figura f2);
    

	float Oblicz_Pole();
	void PiszDane();


};

