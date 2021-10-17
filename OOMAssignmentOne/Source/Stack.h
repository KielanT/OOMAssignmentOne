#pragma once
#include "Element.h"

class Stack
{
public:
	Stack();

	// Pushing (Storing) an element on the stack
	virtual void Push(int) = 0; 

	// Returns the top element of the stack without removing it
	virtual int Top() = 0;

	// Removing (accessing) an element from the stack
	virtual void Pop() = 0;

	// Returns the number of elements in the stack
	int  Size();

	// Check if the stack is empty
	bool IsEmpty();

	// Returns a string that represents the contents of the stack
	virtual void ToString() = 0;

protected:
	Element* m_Head;

	int m_Size;

};

