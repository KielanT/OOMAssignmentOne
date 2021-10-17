#include "Element.h"

Element::Element(int data)
{
	m_Data = data;
}

int Element::GetData()
{
	return m_Data;
}

void Element::SetNext(Element* tmp)
{
	m_Next = tmp;
}

Element* Element::GetNext()
{
	return m_Next;
}
