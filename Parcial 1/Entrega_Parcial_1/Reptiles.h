#include <iostream>
#include "Oviparos.h"

using namespace std;


class reptiles : public oviparos
{
public:
	int Piel()
	{
		cout << "Cuentan con una piel escamosa" << endl;
		return 0;
	}
};