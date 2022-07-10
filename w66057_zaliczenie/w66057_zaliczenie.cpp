

#include <iostream>
#include "Figura.h"
#include<string>
using namespace std;

int main()
{
    Figura p2(20.5, "zielony");
   cout << "Pole prosotkata p2 jest rowne" << p2.Oblicz_Pole();
    Figura k1("prostokat", 10, 20, "czerwony");
    Figura t1("trojkat", 13.5, 11.7, "czerwony");
     k1.PiszDane();
    Figura p3 = p2;
    Figura t3(12);
     cout << "Pole figury k1 jest rowne: " << k1.Oblicz_Pole();
     cout << "Pole figury t1 jest rowne: " << t3.Oblicz_Pole();
      cout << t3 << endl;

}


