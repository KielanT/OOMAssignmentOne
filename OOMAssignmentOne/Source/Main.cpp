#include <iostream>
#include "StackImpl.h"

int main()
{
	std::cout << "Hello World" << std::endl;

	StackImpl* stack = new StackImpl();

	if (stack->IsEmpty())
	{
		std::cout << "Empty" << std::endl;
	}
	else
	{
		std::cout << "not empty" << std::endl;
	}

	stack->Push(1);
	stack->Push(3);
	stack->Push(2);

	stack->TempDisplay();
	std::cout << stack->Size() << std::endl;


	if (stack->IsEmpty())
	{
		std::cout << "Empty" << std::endl;
	}
	else
	{
		std::cout << "not empty" << std::endl;
	}

	std::cout << stack->Top() << std::endl;
}