#pragma once
#include <iostream>
#include <string>
using namespace std;

class Nodo
{
public:
	string Ape;
	string Nom;
	unsigned int edad;
	Nodo *Nodizq = nullptr;
	Nodo *NodDer = nullptr;

	Nodo();

	void imprimirPreorder(Nodo *);

	void imprimirInorder(Nodo *);

	void imprimirPostorden(Nodo *);

	~Nodo();
};