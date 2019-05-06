#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Num;
	cin >> Num;
	int suma = Num;
	Num = Num + suma;//*2
	Num = Num + suma;//*3
	Num = Num + suma;//*4
	Num = Num + suma;//*5
	Num = Num + suma;//*6
	Num = Num + suma;//*7
	Num = Num + suma;//*8
	Num = Num + suma;//*9
	Num = Num + suma;//*10
	

	cout << "la suma del numero introduccido x10 es = " << Num << endl;

	cin.ignore();
	cin.get();
	return 0;
}