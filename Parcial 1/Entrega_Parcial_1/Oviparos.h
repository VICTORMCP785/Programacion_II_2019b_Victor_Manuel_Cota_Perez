#include <iostream>
#include "Animales.h"

using namespace std;

class oviparos : public Animales
{
public:
	int Reproduccion()
	{
		cout << "Se reproducen mediante huevos." << endl;
	}
};