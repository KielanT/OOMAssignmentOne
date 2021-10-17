#pragma once

// TODO: Remove int and make it a template
class Element
{
public:
	Element(int);

	int GetData();
	void SetNext(Element*);
	Element* GetNext();
	

private:
	Element* m_Next;
	int m_Data;
};

