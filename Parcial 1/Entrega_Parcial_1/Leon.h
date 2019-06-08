#include <iostream>
#include "Mamiferos.h"

using namespace std;


class Leon : public Mamiferos
{
public:
	int Caza()
	{
		cout << "En la cuestion de caza el macho se queda cuidando de sus crias y las hembras van a cazar" << endl;
		return 0;
	}
	int Piel()
	{
		cout << "la piel cuenta con un pelaje en el caso de los machos cuentan con una gran melena" << endl;
		return 0;
	}
	int Patas()
	{
		cout << "Cuentan con 4 patas" << endl;
		return 0;
	}

}; #pragma once
