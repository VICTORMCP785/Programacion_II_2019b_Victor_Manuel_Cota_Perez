#pragma once
#include <iostream>
#include <string>

using namespace std;

class Persona
{
public:

	Persona();
	~Persona();
	string Ape;
	string Nom;
	unsigned int edad;

	bool operator > (Persona &);
	bool operator < (Persona &);
	friend std::ostream & operator << (std::ostream & os, Persona & P);
	//bool operator == (Persona & Persona);
};