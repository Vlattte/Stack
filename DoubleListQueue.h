#include "QueueImplementation.h"
#include "DoubleLinkedList.h"

// ������� � �������������� ����� ����������� ������ � �������������� ������������
// ���� �� ������ �� ��� ����������, �� ���� �� ������������ ������ �� ����������
// ������������� ������������ ����� �������� �� ����������
class DoubleListQueue : public QueueImplementation, public DoubleLinkedList
{
public:
	DoubleListQueue()
	{ }

	DoubleListQueue(DoubleListQueue& list)
		:DoubleLinkedList(list)
	{ }

	void enqueue(const ValueType& value)
	{
		pushBack(value);
	}

	void dequeue()
	{
		removeFront();
	}

	const ValueType& front() const
	{
		return getNode(0)->value;
	}

	bool isEmpty() const
	{
		if (size() == 0)
			return true;
		else if (size() != 0)
			return false;
	}

	size_t size() const
	{
		return DoubleLinkedList::size();
	}

	~DoubleListQueue() override {};
};

