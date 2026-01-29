#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
	int val;
	Node* next;
};


class LinkedList {
private:
	Node* head;
	Node* tail;

public:
	LinkedList();
	void insert_front(int val);
	void insert_back(int val);
	void delete_front();
	void delete_back();
	void display();
};

#endif