#pragma once
#include "Nodo.h"

class Nodo;
class SingleNode;
class DoubleNode;
/**
 * The interface Lista that forces subclasses to implement common methods
 */
class Lista 
{
protected:
	/**
	 * Updates the actual number of elements in the Lista
	 */
	unsigned int s;

public:

	/**
	 * Deletes every linked node
	 */
	virtual void clear() = 0;

	/**
	 * Returns the total number of nodes in the Lista
	 * @return [unigned int] The total number of elements
	 */
	virtual unsigned int size() = 0;

	/**
	 * Deletes every linked node
	 */
	virtual ~Lista() {};
};

class SingleLista : public Lista {
protected:
	/**
	 * The very first node on the list
	 */
	SingleNode ** start;

	friend class Ordenamiento;

public:

	/**
	 * TODO implement
	 * Push the node at the beginning of the Lista
	 * @param [SingleNode *] The node to be pushed
	 * @return [void]
	 */
	void push(SingleNode *);

	/**
	 * TODO implement
	 * Push the node at the desired place on the Lista
	 * @param [SingleNode *] The node to be pushed
	 * @param [usigned int] The position where to push the node
	 * @return [void]
	 */
	void push(SingleNode *, unsigned int);

	/**
	 * TODO implement
	 * Pulls the last node of the Lista and unlinks it
	 * @return [SingleNode *] The unlinked node
	 */
	SingleNode * pull();

	/**
	 * TODO implement
	 * Pulls the desired node of the Lista and unlinks it
	 * @param [usigned int] The position of the node to unlink
	 * @return [SingleNode *] The unlinked node
	 */
	SingleNode * pull(unsigned int);

	/**
	 * TODO implement
	 * Deletes the last node of the Lista
	 * @return [void]
	 */
	void remove();

	/**
	 * TODO implement
	 * Deletes the desired node from the Lista
	 * @param [usigned int] The position of the node to unlink
	 * @return [void]
	 */
	void remove(unsigned int);

	/**
	 * TODO implement
	 * Concatenates all the nodes to the output stream
	 */
	friend std::ostream & operator << (std::ostream &, const SingleLista &);

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	void clear();

	/**
	 * TODO implement
	 * Returns the total number of nodes on the Lista
	 * @return [unigned int] The total number of elements
	 */
	unsigned int size();

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	~SingleLista();
};

class DoubleLista : public Lista 
{
protected:
	/**
	 * The very first node on the Lista
	 */
	DoubleNode ** start;

	friend class Ordenamiento;

public:

	/**
	 * TODO implement
	 * Push the node at the beginning of the Lista
	 * @param [DoubleNode *] The node to be pushed
	 * @return [void]
	 */
	void push(DoubleNode *);

	/**
	 * TODO implement
	 * Push the node at the desired place on the Lista
	 * @param [DoubleNode *] The node to be pushed
	 * @param [usigned int] The position where to push the node
	 * @return [void]
	 */
	void push(DoubleNode *, unsigned int);

	/**
	 * TODO implement
	 * Pulls the last node of the Lista and unlinks it
	 * @return [DoubleNode *] The unlinked node
	 */
	DoubleNode * pull();

	/**
	 * TODO implement
	 * Pulls the desired node of the Lista and unlinks it
	 * @param [usigned int] The position of the node to unlink
	 * @return [DoubleNode *] The unlinked node
	 */
	DoubleNode * pull(unsigned int);

	/**
	 * TODO implement
	 * Deletes the last node of the Lista
	 * @return [void]
	 */
	void remove();

	/**
	 * TODO implement
	 * Deletes the desired node from the Lista
	 * @param [usigned int] The position of the node to unlink
	 * @return [void]
	 */
	void remove(unsigned int);

	/**
	 * TODO implement
	 * Concatenates all the nodes to the output stream
	 */
	friend std::ostream & operator << (std::ostream &, const DoubleLista &);

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	void clear();

	/**
	 * TODO implement
	 * Returns the total number of nodes on the Lista
	 * @return [unigned int] The total number of elements
	 */
	unsigned int size();

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	~DoubleLista();
};
