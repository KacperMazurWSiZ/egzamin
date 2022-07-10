#include <iostream>
#include <string>
#include "Figura.h"

using namespace std;

Figura::Figura()
{
	this->nazwa = "kwadrat";
	this->wysokosc = 10;
	this->szerokosc = 10;
	this->kolor = "czarny";
}

Figura::Figura(float wysokosc)
{
	this->wysokosc = wysokosc;
	this->szerokosc = wysokosc;
	this->nazwa = "kwadrat";
	this->kolor = "czarny";
}

Figura::Figura(float wysokosc, string kolor)
{
	this->wysokosc = wysokosc;
	this->kolor = kolor;
	this->nazwa = "kwadrat";
	this->szerokosc = 10;
}

Figura::Figura(string nazwa, float wysokosc, float szerokosc, string kolor)
{
	this->nazwa = nazwa;
	this->wysokosc = wysokosc;
	this->szerokosc = szerokosc;
	this->kolor = kolor;
}

bool Figura::operator==(Figura& f1)
{
	if(this->wysokosc == f1.wysokosc && this->szerokosc == f1.szerokosc && this->kolor == f1.kolor) return true;
	else return false;
}



float Figura::Oblicz_Pole()
{
	if (this->nazwa == "trojkat") {
		return (this->szerokosc * this->wysokosc) / 2;
	
	}
	else if (this->nazwa == "prostokat") {
		return (this->wysokosc * this->wysokosc);
	}
	else {
		return (this->wysokosc * this->szerokosc);
	}



}

void Figura::PiszDane()
{
	cout << "Nazwa: " << nazwa << endl;
	cout << "Wysokosc: " << wysokosc << endl;
	cout << "Szerokosc: " << szerokosc << endl;
	cout << "Kolor: " << kolor << endl;
}

ostream& operator<<(ostream& out, Figura f2)
{
	out << f2.nazwa;
	out << f2.wysokosc;
	out << f2.szerokosc;
	out << f2.kolor;

	return out;
}
