#include "Stack.h"

Stack::Stack()
{
	m_Head = 0;
}

int Stack::Size()
{
	return m_Size;
}

bool Stack::IsEmpty()
{
	if (m_Size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
