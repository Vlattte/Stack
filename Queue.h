#pragma once
// ������� ����������
// ���������� ��� ���������� ������ ���� �����

// ��� �������� � �����
using ValueType = double;

// �� ������ ������ ���������� �������� ����
enum class QueueContainer {
	Vector = 0,
	List = 1,
	DoubleList = 2
	// ����� ��������� ������� ������������
};

// ���������� ������ � �����������
class QueueImplementation;

class Queue
{
public:
	// ������� �������
	Queue(QueueContainer container = QueueContainer::Vector);
	// �������� ������� ��������������� �������������� � ����
	Queue
	(const ValueType* valueArray, const size_t arraySize, QueueContainer container = QueueContainer::Vector);

	explicit Queue(const Queue& copyStack);
	Queue& operator=(const Queue& copyStack);

	// ����� ��� ������
	// Stack(Stack&& moveStack) noexcept;
	// Stack& operator=(Stack&& moveStack) noexcept;

	~Queue();

	// ���������� � �����
	void enqueue(const ValueType& value);
	// �������� � ������
	void dequeue();
	// ���������� ������� � ������
	const ValueType& front() const;
	// �������� �� �������
	bool isEmpty() const;
	// ������ 
	size_t size() const;
private:
	// ��������� �� ������������� (������� ����������)
	QueueImplementation* _pimpl = nullptr;
	// ��� ����������, ��������� �����������
	QueueContainer _containerType;
};
