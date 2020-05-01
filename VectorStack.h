#pragma once

#include "StackImplementation.h"
#include "Vector.h"

// ������� � �������������� ����� ����������� ������� � �������������� ������������
// ���� �� ������ �� ��� ����������, �� ���� �� ������������ ������ �� ����������
// ������������� ������������ ����� �������� �� ����������
class VectorStack : public StackImplementation, public MyVector
{
public:
	VectorStack() {};

	VectorStack(VectorStack& vec)
		:MyVector(vec) { }

	void push(const ValueType& value)
	{
		pushBack(value);
	}

	void pop()
	{
		popBack();
	}

	const ValueType& top() const
	{
		return this->operator[]( size() ); //������ ��������� �������
	}

	bool isEmpty() const
	{
		if (size() == 0)
			return false;
		else if (size() != 0)
			return true;
	}

	size_t size() const
	{
		return MyVector::size();
	}

	~VectorStack() override {};
};