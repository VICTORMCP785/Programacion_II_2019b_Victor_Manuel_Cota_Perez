#include "Nodo.h"

const std::string Nodo::getName()
{	
	return name;
}

void Nodo::setName(std::string S)
{
	name = S;
}

const std::string Nodo::getLastName()
{
	return lastName;
}

void Nodo::setLastName(std::string S)
{
	lastName = S;
}

const std::string Nodo::getEmail()
{
	return email;
}

void Nodo::setEmail(std::string S)
{
	email = S;
}

void Nodo::setBirthDate(unsigned char A, unsigned char B, unsigned char C)
{
	birthDay = (unsigned char)A;
	birthMonth = (unsigned char)B;
	birthYear = (unsigned char)C;
}

const std::string Nodo::getFullName()
{
	return lastName, " ", name;
}

const unsigned int Nodo::getAge()
{
	unsigned int age = 19;
	if (birthYear <= age) {
		age = age - int((unsigned char)birthYear);
		return age;
	}
	else {
		age = 0;
		return age;
	}
}

std::ostream & operator << (std::ostream &out, SingleNode &v)
{
	out << "\n\nThe name is:" << v.getFullName() << "\nThe age is: " << v.getAge() << "\nThe email is: " << v.getEmail();
	if (v.next == nullptr) 
	{
		return out;
	}
	else 
	{
		return out << v.next;
	}
}

std::istream & operator>>(std::istream &inp, SingleNode &N)
{
	std::cout << "Ingrese su nombre: " << std::endl;
	inp >> N.name;
	std::cout << "Ingrese su apellido: " << std::endl;
	inp >> N.lastName;
	std::cout << "Ingrese su email: " << std::endl;
	inp >> N.email;
	std::cout << "Ingrese el dia que naciste: " << std::endl;
	inp >> N.birthDay;
	std::cout << "Ingrese el mes que naciste: " << std::endl;
	inp >> N.birthMonth;
	std::cout << "Ingrese el año en que naciste: " << std::endl;
	inp >> N.birthYear;

	return inp;
}

std::ostream & operator<<(std::ostream &out, DoubleNode &v)
{
	out << "\n\nThe name is:" << v.getFullName() << "\nThe age is: " << v.getAge() << "\nThe email is: " << v.getEmail();
	if (v.next == nullptr) 
	{
		return out;
	}
	else
	{
		return out << v.next;
	}
}

std::istream & operator>>(std::istream &inp, DoubleNode &N)
{
	std::cout << "Ingrese su nombre: " << std::endl;
	inp >> N.name;
	std::cout << "Ingrese su apellido: " << std::endl;
	inp >> N.lastName;
	std::cout << "Ingrese su email: " << std::endl;
	inp >> N.email;
	std::cout << "Ingrese el dia que naciste: " << std::endl;
	inp >> N.birthDay;
	std::cout << "Ingrese el mes que naciste: " << std::endl;
	inp >> N.birthMonth;
	std::cout << "Ingrese el año en que naciste: " << std::endl;
	inp >> N.birthYear;

	return inp;
}

bool SingleNode::operator > (SingleNode & v)
{
	return this->getAge() > v.getAge();
}

bool SingleNode::operator < (SingleNode & v)
{
	return this->getAge() < v.getAge();
}

SingleNode::~SingleNode()
{
	if (next != nullptr)
	{
		delete next;
	}
}

bool DoubleNode::operator>(DoubleNode &v)
{
	return this->getAge() > v.getAge();
}

bool DoubleNode::operator<(DoubleNode &v)
{
	return this->getAge() < v.getAge();
}

DoubleNode::~DoubleNode()
{
	if (next != nullptr)
	{
		delete next;
	}
}
