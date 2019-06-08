#include <iostream>
#include "Animales.h"

using namespace std;

class Mamiferos : public Animales
{
public:
	int Reproduccion()
	{
		cout << "Se reproducen la gestacion en el vientre" << endl;
		return 0;
	}
};