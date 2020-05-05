#include "ListQueue.h"

ListQueue::ListQueue()
{ }

ListQueue::ListQueue(ListQueue& list)
	:LinkedList(list)
{ }

void ListQueue::enqueue(const ValueType& value)
{
	pushBack(value);
}

void ListQueue::dequeue()
{
	removeFront();
}

const ValueType& ListQueue::front() const
{
	return getNode(0)->value; 
}

bool ListQueue::isEmpty() const
{
	if (size() == 0)
		return true;
	else if (size() != 0)
		return false;
}

size_t ListQueue::size() const
{
	return LinkedList::size();
}





