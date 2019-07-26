#include "Nodo.h"

int main()
{
	Nodo *Ptr = nullptr;
	Nodo N0, N1, N2, N3, N4, N5, N6;

	N0.Ape = "Cota"; N0.Nom = "Victor"; N0.edad = 19;
	N1.Ape = "Ramirez"; N1.Nom = "Roberto"; N1.edad = 18;
	N2.Ape = "Gerrero"; N2.Nom = "Ramses"; N2.edad = 19;
	N3.Ape = "Chong"; N3.Nom = "Juan Pablo"; N3.edad = 19;
	N4.Ape = "Del Moral"; N4.Nom = "Chucho"; N4.edad = 19;
	N5.Ape = "Solis"; N5.Nom = "Emilio"; N5.edad = 19;
	N6.Ape = "Perez"; N6.Nom = "Mariana"; N6.edad = 19;

	N1.Nodizq = &N3;
	N1.NodDer = &N4;
	N2.Nodizq = &N5;
	N2.NodDer = &N6;
	N0.Nodizq = &N1;
	N0.NodDer = &N2;
	Ptr = &N0;
	
	while (true)
	{
		cout << "1 = Preorder \n 2 = Postorder \n 3 = Inorder \n 4 = Salir" << endl;
		char ele;
		if (ele = '1')
		{
			Ptr->imprimirPreorder(Ptr);
		}
		else if (ele = '2')
		{
			Ptr->imprimirPostorden(Ptr);
		}
		else if (ele = '3')
		{
			Ptr->imprimirInorder(Ptr);
		}
		else
		{
			break;
		}
	}

	return 0;
}