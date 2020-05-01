#pragma once

#include "StackImplementation.h"
#include "LinkedList.h"

// ������� � �������������� ����� ����������� ������ � �������������� ������������
// ���� �� ������ �� ��� ����������, �� ���� �� ������������ ������ �� ����������
// ������������� ������������ ����� �������� �� ����������
class ListStack : public StackImplementation, public LinkedList
{
public:
	ListStack();

	ListStack(ListStack& list);

	void push(const ValueType& value);
	
	void pop();

	const ValueType& top() const;

	bool isEmpty() const;

	size_t size() const;

	~ListStack() override {};
};

