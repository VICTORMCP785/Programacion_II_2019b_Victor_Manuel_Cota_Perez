#include "Persona.h"

Persona::Persona()
{
	cout << "Inserte Apellido: ";
	cin >> Ape;
	cout << "Inserte Nombre: ";
	cin >> Nom;
	cout << "Incerte Edad: ";
	cin >> edad;
}

Persona::~Persona()
{

}

bool Persona:: operator > (Persona & persona)
{
	if (Ape != persona.Ape)
	{
		return Ape > persona.Ape;
	}
	else if (Nom != persona.Nom)
	{
		return Nom > persona.Nom;
	}
	else if (edad != persona.edad)
	{
		return edad > persona.edad;
	}
}

bool Persona::operator < (Persona & persona)
{
	if (Ape != persona.Ape)
	{
		return Ape < persona.Ape;
	}
	else if (Nom != persona.Nom)
	{
		return Nom < persona.Nom;
	}
	else if (edad != persona.edad)
	{
		return edad < persona.edad;
	}
}

std::ostream & operator<<(std::ostream & os, Persona & persona)
{
	os << persona.Ape << " " << persona.Nom << "  " << persona.edad << endl;
	return os;
}
