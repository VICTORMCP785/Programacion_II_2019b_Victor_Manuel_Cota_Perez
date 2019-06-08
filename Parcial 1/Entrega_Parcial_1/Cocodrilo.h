#include <iostream>
#include "Reptiles.h"

using namespace std;

class Cocodrilo : public reptiles
{
public:
	int Caza()
	{
		cout << "Al ser carnivoros se dedican a la caza de presas cerca de su habitat" << endl;
		return 0;
	}
	int Patas()
	{
		cout << "Cuentan con 4 patas" << endl;
	}
};