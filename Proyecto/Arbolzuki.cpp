#include "Arbolzuki.h"
#include "Nodo.h"

template<class T>
Arbolzuki<T>::Arbolzuki()
{

}

template<class T>
void Arbolzuki<T>::inorder()
{
	Raiz->imprimirinorder();
}

template<class T>
void Arbolzuki<T>::postorden()
{
	Raiz->imprimirpostorden();
}

template<class T>
void Arbolzuki<T>::preorder()
{
	Raiz->imprimirpreorder();
}

template <class T>
Arbolzuki<T>::~Arbolzuki()
{

}


/*
template <class T>
void Arbolzuki<T>::Hakai(Nodo<T> *N, int NumNodo)
{
	if (N->Nodizq == nullptr and N->NodDer == nullptr)
	{
		delete N;
	}
	else if (N->Nodizq == nullptr and N->NodDer != nullptr)
	{
		Nodo<T> *temp = N->NodDer;
		N->NodDer = nullptr;
		delete N;
	}
	else if (N->Nodizq != nullptr and N->NodDer == nullptr)
	{
		Nodo<T> *temp = N->Nodizq;
		N->Nodizq = nullptr;
		delete N;
	}
	else if (N->Nodizq != nullptr and N->NodDer != nullptr)
	{
		Nodo<T> *temp1 = N->Nodizq;
		Nodo<T> *temp = N->NodDer;
		N->NodDer = nullptr;
		N->Nodizq = nullptr;
		delete N;
	}
}

Template <class T>
void Arbolzuki<T>::RotaccionDer(Nodo<T> * & Pivot, Nodo<T> * & Raiz)
{
	Nodo<T> * temp = Pivot->NodDer;
	anterior->NodDer = nullptr;
	anterior->Nodizq = nullptr;
	Pivot->NodDer = anterior;
	anterior->Nodizq = temp;

	Raiz->Nodizq = nullptr;
	Raiz->Nodizq = Pivot->NodDer;
	Pivot->NodDer = nullptr;
	Pivot->NodDer = Raiz;
}

template<class T>
void Arbolzuki<T>::RotaccionIzq(Nodo<T> * & Pivot, Nodo<T> * & Rai)
{
	Raiz->NodDer = nullptr;
	Raiz->NodDer = Pivot->Nodizq;
	Pivot->Nodizq = nullptr;
	Pivot->Nodizq = Raiz;
}*/

/*
template <class T>
void Nodo<T>::imprimirPreorder(Nodo *N)
{
	cout << N->Datos.Ape << " " << N->Datos.Nom << " " << N->Datos.edad << endl;
	if (N->Nodizq != nullptr)
	{
		imprimirPreorder(N);
	}
	if (N->NodDer != nullptr)
	{
		imprimirPreorder(N);
	}
}

template <class T>
void Nodo<T>::imprimirInorder(Nodo *N)
{

	if (N->Nodizq != nullptr)
	{
		imprimirPreorder(N);
	}
	cout << N->Datos.Ape << " " << N->Datos.Nom << " " << N->Datos.edad << endl;
	if (N->NodDer != nullptr)
	{
		imprimirPreorder(N);
	}
}

template <class T>
void Nodo<T>::imprimirPostorden(Nodo *N)
{

	if (N->Nodizq != nullptr)
	{
		imprimirPreorder(N);
	}
	if (N->NodDer != nullptr)
	{
		imprimirPreorder(N);
	}
	cout << N->Datos.Ape << " " << N->Datos.Nom << " " << N->Datos.edad << endl;
}
*/

template<class T>
ArbolBinario<T>::ArbolBinario()
{

}


template <class T>
void ArbolBinario<T>::Creaccion_Nodos(Nodo <T> *nodo)
{
	if (Raiz != nullptr)
	{
		Raiz->CrearNodos(nodo);
	}
	else
	{
		Raiz = nodo;
	}
}

/*
template <class T>
void ArbolBinario<T>::Creacion_de_Arboles_Binarios(Nodo<T> A)
{
	if ( 1 == 1 )
	{
		if ( A.Nodizq != nullptr )
		{
			//crea_arbolukis2000(Raiz, A);
		}
		else
		{
			//Raiz->Raiz->Nodizq = &A;
		}
	}

	if ( 1 == 1 )
	{
		if (A.Nodizq != nullptr)
		{
			//crea_arbolukis2000(Raiz, A);
		}
		else
		{
			//Raiz->Raiz->NodDer = &A;
		}
	}
}*/

template<class T>
inline Arbol_AVL<T>::Arbol_AVL()
{

}

template<class T>
void Arbol_AVL<T>::creacion_de_nodos(Nodo <T> *nodo)
{
	if (Raiz != nullptr)
	{
		Raiz->CrearNodos(nodo);
	}
	else
	{
		Raiz = nodo;
	}
}

template class Arbolzuki<Persona>;
template class ArbolBinario<Persona>;
template class Arbol_AVL <Persona>;