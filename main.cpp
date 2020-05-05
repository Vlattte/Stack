#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	const size_t size = 10;
	double array[size] = { 1, 2, 3, 4, 5, 6, 47, 47, 48, 49 };

	Queue queue(array, size, QueueContainer::Vector);
	cout << "size: " << queue.size() << endl;
	cout << "|" << queue.front() << "|" << endl;

	queue.dequeue();
	cout << "|" << queue.front() << "|" << endl;
	
	queue.enqueue(55);
	cout << "|" << queue.front() <<  "|" << endl << endl;

	cout << "isEmpty: " << queue.isEmpty() << endl;
	cout << "size: "    << queue.size()    << endl;
	int n;
	cin >> n;
}