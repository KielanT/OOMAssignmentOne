#pragma once
#include "Stack.h"
#include <iostream>

class StackImpl : public Stack
{
public:
	// Pushing (Storing) an element on the stack
	virtual void Push(int) override;

	// Returns the top element of the stack without removing it
	virtual int Top() override;

	// Removing (accessing) an element from the stack
	virtual void Pop() override;

	// Returns a string that represents the contents of the stack
	virtual void ToString() override;

	void TempDisplay()
	{
		Element* current;
		current = m_Head; // can't use head, otherwise we'd loose track of the start of the list
		while (current) // relies on current becoming 0 at the end of the list. 0 is false.
		{
			std::cout << current->GetData() << std::endl;
			current = current->GetNext();
		}
		std::cout << std::endl;
	}

};

