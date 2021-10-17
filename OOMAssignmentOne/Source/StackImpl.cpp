#include "StackImpl.h"

void StackImpl::Push(int data)
{
	Element* tmp = new Element(data);
	tmp->SetNext(0);
	if (m_Head)
	{
		Element* current = m_Head;
		while (current->GetNext())
		{
			current = current->GetNext();
		}
	  current->SetNext(tmp);
	  m_Size++;
	}
	else
	{
		m_Head = tmp;
		m_Size++;
	}
}

int StackImpl::Top()
{
	return m_Head->GetData();
}

void StackImpl::Pop()
{

}

void StackImpl::ToString()
{
}
