#pragma once

#include "QueueImplementation.h"
#include "Vector.h"

// ������� � �������������� ����� ����������� ������� � �������������� ������������
// ���� �� ������ �� ��� ����������, �� ���� �� ������������ ������ �� ����������
// ������������� ������������ ����� �������� �� ����������
class VectorQueue : public QueueImplementation, public MyVector
{
public:
	VectorQueue() {};

	VectorQueue(VectorQueue& vec)
		:MyVector(vec) { }

	void enqueue(const ValueType& value)
	{
		pushBack(value);
	}

	void dequeue()
	{
		_currentHeadIndex++;
		if (_currentHeadIndex / size() == _coef)
		{
			size_t newSize = size() - _currentHeadIndex;
			MyVector buf(newSize, ResizeStrategy::Multiplicative, 2);
			
			for (size_t i = _currentHeadIndex, index = 0; i < size(); i++, index++)
			{
				buf[index] = this->operator[](i);   //������������ �������� ����� _currentHeadIndex � �����
			}
			_currentHeadIndex = 0;

			this->resize(newSize);
			for (size_t i = 0; i < size(); i++)
			{
				this->operator[](i) = buf[i];
			}
			buf.clear();
			_currentHeadIndex = 0;
		}
	}

	const ValueType& front() const
	{
		return this->operator[](_currentHeadIndex); //������ ��������� �������
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
		return MyVector::size();
	}

	~VectorQueue() override {};

private:
	size_t _currentHeadIndex = 0;
	float _coef = 0.25;
};