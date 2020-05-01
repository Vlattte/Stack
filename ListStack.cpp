#include "ListStack.h"

ListStack::ListStack()
{ }

ListStack::ListStack(ListStack& list)
	:LinkedList(list)
{ }

void ListStack::push(const ValueType& value)
{
	pushFront(value);
}

void ListStack::pop()
{
	removeFront();
}

const ValueType& ListStack::top() const
{
	return getNode(0)->value; 
}

bool ListStack::isEmpty() const
{
	if (size() == 0)
		return true;
	else if (size() != 0)
		return false;
}

size_t ListStack::size() const
{
	return LinkedList::size();
}





