#include <iostream>
#include "LinkedList.h"

int main() {
	LinkedList list;

	list.insert_front(1);
	list.insert_front(2);
	list.insert_front(3);
	list.display();
	
	list.delete_back();
	list.display();

	list.delete_front();
	list.display();

	list.insert_back(3);
	list.insert_back(4);
	list.insert_front(1);
	list.display();
	return 0;
}