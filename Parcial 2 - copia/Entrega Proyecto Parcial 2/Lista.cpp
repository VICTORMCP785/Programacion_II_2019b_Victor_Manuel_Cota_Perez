#include "Lista.h"

void SingleLista::push(SingleNode * Nod)
{
	if (start != nullptr)
	{
		SingleNode * temp = *start;
		SingleNode * prev = nullptr;
		while (temp != nullptr)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = Nod;
	}
	else
	{
		start = &Nod;
	}
}

void SingleLista::push(SingleNode *Nod, unsigned int N)
{
	if (N <= s)
	{
		unsigned int cont = 0;

		if (start != nullptr)
		{
			SingleNode *temp = *start;
			SingleNode *prev = nullptr;

			while (cont < N)
			{
				prev = temp;
				temp = temp->next;
				cont++;
			}
			if (cont == N)
			{
				prev->next = Nod;
				Nod->next = temp;
			}
		}
		else
		{
			start = &Nod;
		}
		s++;
	}
	else
	{
		cout << "Fuera de rango" << endl;
	}
}

SingleNode * SingleLista::pull()
{
	if (start != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Prev = Temp;
			Temp = Temp->next;
			Cont++;
		}
		Prev->next = nullptr;
		return Temp;
	}
	else
	{
		return nullptr;
	}
}

SingleNode * SingleLista::pull(unsigned int N)
{
	if (N <= s)
	{
		if (start != nullptr)
		{
			SingleNode * temp = *start;
			SingleNode * prev = nullptr;
			unsigned int cont = 0;

			while (cont < N)
			{
				prev = temp;
				temp = temp->next;
				cont++;
			}
			if (cont == N)
			{
				prev->next = temp->next;
				temp->next = nullptr;
				return temp;
			}
		}
		else
		{
			return nullptr;
		}
		s--;
	}
	else
	{
		cout << "Fuera de rango" << endl;
		return nullptr;
	}
}

void SingleLista::remove()
{
	if (start != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Prev = Temp;
			Temp = Temp->next;
			Cont++;
		}
		Prev->next = nullptr;
		delete Temp;
		s--;
	}
	else
	{
		std::cout << "No hay valores que eliminar" << std::endl;
	}
	
}

void SingleLista::remove(unsigned int N)
{
	if (N <= s)
	{
		if (start != nullptr)
		{
			SingleNode * Temp = *start;
			SingleNode * Prev = nullptr;
			unsigned int cont = 0;

			while (cont < N)
			{
				Prev = Temp;
				Temp = Temp->next;
				cont++;
			}
			if (cont == N)
			{
				Prev->next = Temp->next;
				Temp->next = nullptr;
				delete Temp;
				s--;
			}
		}
	}
	else
	{
		std::cout << "Fuera de rango" << std::endl;
	}
}

void SingleLista::clear()
{
	if (start != nullptr)
	{
		delete *start;
	}
}

unsigned int SingleLista::size()
{
	return s;
}

SingleLista::~SingleLista()
{

}


std::ostream & operator<<(std::ostream & out, const SingleLista &v)
{
	return out << **v.start;
}

std::ostream & operator<<(std::ostream &out, const DoubleLista &v)
{
	return out << **v.start;
}

void DoubleLista::push(DoubleNode *N)
{
	if (start != nullptr)
	{
		DoubleNode * Temp = *start;

		while (Temp->next != nullptr)
		{
			Temp->prev = Temp;
			Temp->next = Temp->next->next;
			Temp = Temp->next;

		}
		Temp->next = N;
		N->prev = Temp;
		Temp->next = nullptr;

	}
	else
	{
		start = &N;
	}
	s++;
}

void DoubleLista::push(DoubleNode *N, unsigned int n)
{
	if (n < s)
	{
		if (start != nullptr)
		{
			unsigned int cont = 0;
			DoubleNode * temp = *start;

			while (cont < n)
			{
				temp->prev = temp;
				temp->next = temp->next->next;
				temp = temp->next;
			}
			if (cont == n)
			{
				temp->next->prev = N;
				N->next = temp->next;
				temp->next = N;
				N->prev = temp;
			}
		}
		else
		{
			start = &N;
		}
		s++;
	}
	else
	{
		cout << "Fuera de rango" << endl;
	}
}

DoubleNode * DoubleLista::pull()
{
	if (start != nullptr)
	{
		DoubleNode * Temp = *start;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Temp = Temp->next;
			Cont++;
		}
		Temp->prev->next = nullptr;
		Temp->prev = nullptr;
		s--;
		return Temp;
	}
	else
	{
		return nullptr;
	}
}

DoubleNode * DoubleLista::pull(unsigned int N )
{
	return nullptr;
}

void DoubleLista::remove()
{
	if (start != nullptr)
	{
		DoubleNode * temp = *start;
		while (temp->next != nullptr)
		{
			temp->prev = temp;
			temp = temp->next;
			temp->next = temp->next->next;
		}
		temp->prev->next = nullptr;
		temp->prev = nullptr;
		delete temp;
		s--;
	}
	else
	{
		std::cout << "No hay valores que eliminar" << std::endl;
	}
}

void DoubleLista::remove(unsigned int N)
{
	if (N < s)
	{
		if (start != nullptr)
		{
			DoubleNode * Temp = *start;
			unsigned int Cont = 0;
			while (Cont < N)
			{
				Temp->prev = Temp;
				Temp = Temp->next;
				Temp->next = Temp->next->next;
			}
			Temp->prev->next = nullptr;
			Temp->prev = nullptr;
			delete Temp;
			s--;
		}
		else
		{
			std::cout << "No hay valores a eliminar ya que la lista esta vacia.\n";
		}
	}
	else
	{
		std::cout << "La posicion especificada es invalida.\n";
	}
}

void DoubleLista::clear()
{
	if (start != nullptr)
	{
		delete *start;
	}
}

unsigned int DoubleLista::size()
{
	return s;
}

DoubleLista::~DoubleLista()
{

}