#include <iostream>
#include "Oviparos.h"
#include "Animales.h"
using namespace std;




class Aves : public oviparos
{
public:
	int Caza()
	{
		cout << "" << endl;
	}
	int Patas()
	{
		cout << "Cuentan con 2 patas" << endl;
	}
	int Piel()
	{
		cout << "Su piel tiene llena de plumas" << endl;
		return 0;
	}
};

