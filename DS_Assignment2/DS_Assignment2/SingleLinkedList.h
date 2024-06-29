#ifndef SINGLE_LINKED_LIST
#define SINGLE_LINKED_LIST

class Node {
public:
	//members
	int data;
	Node* nextPtr;

	//constructors
	Node()
	{
		data = 0;
		nextPtr = nullptr;
	}

	Node(int value) {
		data = value;
		nextPtr = nullptr;
	}
};

template <typename Item_Type>
class Single_Linked_List {
public:
	//functions
	void push_front(int data);
	void push_back(int data);
	void pop_front();
	void pop_back();
	bool empty();
	void insert(size_t index, const int& item);
	bool remove(size_t index);
	size_t find(const int& item);
	int front();
	int back();

private:
	//members
	Node* head;
	Node* tail;
	int num_items;
};

#endif