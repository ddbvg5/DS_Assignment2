#include "SingleLinkedList.h"
#include <iostream>

using namespace std;

void Single_Linked_List<int>::push_back(int data) {
	Node* newNode = new Node(data);
	if (empty()) {
		head = newNode;
		tail = newNode;
	}
	else {
		Node* temp = head;
		while (temp->nextPtr != nullptr) {
			temp = temp->nextPtr;
		}
		temp->nextPtr = newNode;
	}
	
}

void Single_Linked_List<int>::push_front(int data) {
	Node* newNode = new Node(data);
	
	if (empty()) {
		head = newNode;
		tail = newNode;
	}
	else {
		Node* temp = head;
		head = newNode;
		head->nextPtr = temp;
	}
}

void Single_Linked_List<int>::pop_front() {
	if (empty()) {
		cout << "List is empty!" << endl;
	}
	else {
		Node* temp = head;
		head = head->nextPtr;
		delete temp;	
	}
}

void Single_Linked_List<int>::pop_back() {
	if (empty()) {
		cout << "List is empty!" << endl;
	}
	else if (head == tail) {
		delete head;
		delete tail;
	}
	else {
		Node* temp = head;
		while (temp->nextPtr != tail) {
			temp = temp->nextPtr;
		}
		temp->nextPtr = nullptr;
		delete temp->nextPtr;
		tail = temp;
	}
}

void Single_Linked_List<int>::insert(size_t index, const int& item) {
	Node* newNode = new Node(item);
	int iterator = 0;
	if (empty()) {
		head = tail = newNode;
	}
	else {
		Node* temp = head;
		while (temp->nextPtr != nullptr && iterator < index) {
			temp = temp->nextPtr;
			iterator++;
		}

		newNode->nextPtr = temp->nextPtr;
		temp->nextPtr = newNode;
	}
}

bool Single_Linked_List<int>::remove(size_t index) {
	if (empty()) {
		return false;
	}
	else {
		int iterator = 0;

		Node* temp = head;
		while (temp->nextPtr != nullptr && iterator <= index) {
			temp = temp->nextPtr;
			iterator++;
		}
		if (iterator < (index - 1)) {
			return false;
		}
		Node* currentNode = temp;
		temp = temp->nextPtr;
		currentNode->nextPtr = temp->nextPtr;
		delete temp;
		return true;
	}
}

size_t Single_Linked_List<int>::find(const int& item) {
	int iterator = 0;
	if (empty()) {
		return 0;
	}
	else {
		Node* temp = head;
		while (temp->data != item) {
			temp = temp->nextPtr;
			iterator++;
		}
		if (temp->data == item)
			return iterator;
		else {
			return (++iterator);
		}
	}
}

int Single_Linked_List<int>::front() {
	return head->data;
}

int Single_Linked_List<int>::back() {
	return tail->data;
}


template<typename T>
bool Single_Linked_List<T>::empty(){
	return head == nullptr;
}
