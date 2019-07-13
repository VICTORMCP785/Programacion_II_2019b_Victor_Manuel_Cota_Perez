#pragma once
#include <string>
#include <iostream>
using namespace std;
class Ordenamiento;
class Nodo 
{
protected:
	/**
	 * Name of the person
	*/
	std::string name;

	/**
	 * LastName of the person
	*/
	std::string lastName;

	/**
	 * E-mail address
	*/
	std::string email;

	/**
	 * The birth day of the person
	*/
	unsigned char birthDay;

	/**
	 * The birth month of the person
	*/
	unsigned char birthMonth;

	/**
	 * The birth year of the person
	*/
	unsigned char birthYear;

public:

	/**
	 * TODO implement
	 * Returns the Name of the person
	 * @return [std::string] The name
	*/
	const std::string getName();

	/**
	 * TODO implement
	 * Sets the Name of the person
	 * @param [std::string] The name
	 * @return [void]
	*/
	void setName(std::string);

	/**
	 * TODO implement
	 * Returns the LastName of the person
	 * @return [std::string] The lastname
	*/
	const std::string getLastName();

	/**
	 * TODO implement
	 * Sets the LastName of the person
	 * @param [std::string] The lastname
	 * @return [void]
	*/
	void setLastName(std::string);

	/**
	 * TODO implement
	 * Returns the E-mail address of the person
	 * @return [std::string] The E-mail address
	*/
	const std::string getEmail();

	/**
	 * TODO implement
	 * Sets the E-mail of the person
	 * @param [std::string] The E-mail
	 * @return [void]
	*/
	void setEmail(std::string);

	/**
	 * TODO implement
	 * Sets the birthdate of the person
	 * @param [unsigned char] day
	 * @param [unsigned char] month
	 * @param [unsigned char] year
	 * @return [void]
	*/
	void setBirthDate(unsigned char, unsigned char, unsigned char);

	/**
	 * TODO implement
	 * Returns the full name in format "LastName Name"
	 * @return [std::string] The full name
	*/
	const std::string getFullName();

	/**
	 * TODO implement
	 * Returns the calculated age
	 * @return [unsigned int] The age
	 */
	const unsigned int getAge();

	/**
	 * Deletes every linked node
	 */
	virtual ~Nodo() {};
};

/**
 * The SingleNode class to representate a single linked list, inherits from Node
 */
class SingleNode : public Nodo 
{
protected:

	/**
	 * The pointer to the next node
	*/
	SingleNode * next;

	/**
	 * Adds friendship to List class
	 */
	friend class SingleLista;

	/**
	 * Adds friendship to Sort class
	 */
	friend class Ordenamiento;

public:

	/**
	 * TODO implement
	 * Overrides the ">" operator allowing: (SingleNode & > SingleNode &)
	 * @param [const SingleNode &] The right side of the operation
	 * @return [bool] Whether is the left side is greater than the right side
	 */
	bool operator > (SingleNode & v);

	/**
	 * TODO implement
	 * Overrides the "<" operator allowing: (SingleNode & < SingleNode &)
	 * @param [const SingleNode &] The right side of the operation
	 * @return [bool] Whether is the left side is lower than the right side
	 */
	bool operator < (SingleNode & v);

	/**
	 * TODO implement
	 * Concatenates the full data of this nodes and the followings to the output stream
	 */
	friend std::ostream & operator << (std::ostream &, SingleNode &);

	/**
	 * TODO implement
	 * Concatenates the full data of this nodes and the followings to the output stream
	 */
	friend std::istream & operator >> (std::istream &, SingleNode &);

	/*
	SingleNode GetNext();
	SingleNode GetPrev();

	void SetNext();
	void SetPrev();
	*/

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	virtual ~SingleNode();
};

/**
 * The DoubleNode class to representate a double linked list, inherits from Node
 */
class DoubleNode : public Nodo 
{
protected:

	/**
	 * The pointer to the next node
	 */
	DoubleNode* next;

	/**
	 * The pointer to the previous node
	 */
	DoubleNode* prev;

	/**
	 * Adds friendship to List class
	 */
	friend class DoubleLista;

	/**
	 * Adds friendship to Sort class
	 */
	friend class Ordenamiento;

public:

	/**
	 * TODO implement
	 * Overrides the ">" operator allowing: (DoubleNode & > DoubleNode &)
	 * @param [const DoubleNode &] The right side of the operation
	 * @return [bool] Whether is the left side is greater than the right side
	 */
	bool operator > (DoubleNode &);

	/**
	 * TODO implement
	 * Overrides the "<" operator allowing: (DoubleNode & < DoubleNode &)
	 * @param [const DoubleNode &] The right side of the operation
	 * @return [bool] Whether is the left side is lower than the right side
	 */
	bool operator < (DoubleNode &);

	/**
	 * TODO implement
	 * Concatenates the full data of this nodes and the followings to the output stream
	 */
	friend std::ostream & operator << (std::ostream &, DoubleNode &);

	/**
	 * TODO implement
	 * Concatenates the full data of this nodes and the followings to the output stream
	 */
	friend std::istream & operator >> (std::istream &, DoubleNode &);

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	virtual ~DoubleNode();
};