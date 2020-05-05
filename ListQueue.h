#pragma once

#include "QueueImplementation.h"
#include "LinkedList.h"

// ������� � �������������� ����� ����������� ������ � �������������� ������������
// ���� �� ������ �� ��� ����������, �� ���� �� ������������ ������ �� ����������
// ������������� ������������ ����� �������� �� ����������
class ListQueue : public QueueImplementation, public LinkedList
{
public:
	ListQueue();

	ListQueue(ListQueue& list);

	void enqueue(const ValueType& value);
	
	void dequeue();

	const ValueType& front() const;

	bool isEmpty() const;

	size_t size() const;

	~ListQueue() override {};
};

