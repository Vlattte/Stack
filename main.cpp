#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	const size_t size = 10;
	double array[size] = { 1, 2, 3, 4, 5, 6, 47, 47, 48, 49 };

	Stack stack(array, size, StackContainer::Vector);
	cout << "size: " << stack.size() << endl;

	cout << "|" << stack.top() << "|" << endl;
	stack.pop();
	cout << "|" << stack.top() <<  "|" << endl << endl;

	cout << "isEmpty: " << stack.isEmpty() << endl;
	cout << "size: "    << stack.size()    << endl;
}