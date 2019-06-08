#include <iostream>
#include "Mamiferos.h"

using namespace std;

class Tigre : public Mamiferos
{
public:
	int Caza()
	{
		cout << "Al ser carnivoros consumen en su mayoria carne de otros animeles " << endl;
		return 0;
	}
	int Piel()
	{
		cout << "Cuentan con un pelaje cuentan con un pelaje de color naranja con rayas negras" << endl;
		return 0;
	}
	int Patas()
	{
		cout << "Cuentan con 4 patas" << endl;
	}
};
