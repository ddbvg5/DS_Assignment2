#include "SingleLinkedList.h"
#include <iostream>
using namespace std;

int main() {
	int average = 0, iterator = 0;

	//Q2.1
	Single_Linked_List<int> stackObj = Single_Linked_List<int>();

	//Q2.2
	if (stackObj.empty()) {
		cout << "Stack is empty" << endl;
	}
	else {
		cout << "Stack is not empty" << endl;
	}

	//Q2.3
	stackObj.insert(0, 2);
	stackObj.insert(1, 1);
	stackObj.insert(2, 4);

	//Q2.4 does not work
	//stackObj.remove(1);
	
	//Q2.5

	cout << stackObj.front();

	//Q2.6
	
	while (!stackObj.empty()) {
		average += stackObj.front();
		iterator++;
		stackObj.pop_front();
	}
	average = average / iterator;

	cout << "The average of the stack is: " << average;
	
	return 0;
}