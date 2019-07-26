#include <iostream>

using namespace std;

int Secuence(int X, int Y, int Z)
{
	unsigned int Num = (Y-X)/Z;
	unsigned int result = (Z*((Num*(Num + 1) / 2))) + (X + (Num*X));
	return result;
}

int main()
{
	unsigned int Ini, Lim, Sum;
	cout << "Inicio: "; cin >> Ini; 
	cout << "Limite: "; cin >> Lim;
	cout << "Num Suma: "; cin >> Sum;

	cout << "El resultado es: " << Secuence(Ini, Lim, Sum);

	cin.ignore();
	cin.get();
	return 0;
}