#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>

template<class T>
class LinkedList {
public:
	LinkedList();
	~LinkedList();

	void displayList();
	void insert(const T &data);
	void deleteItem(int pos, T data);
	void push_back(T data);
	void push_front(T data);

	//operators
	//std::ostream& operator<<();

private:
	template<class T>
	struct Node{
		T data;
		Node<T>* next;
	};
	Node<T>* head;
	Node<T>* tail;
	//NodePtr<T>* head;
	//NodePtr<T>* tail;

};

//#include "LinkedList_impl.h"
#ifndef LINKED_LIST_IMPL_H
#define LINKED_LIST_IMPL_H

//#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList(){
}
template<class T>
LinkedList<T>::~LinkedList(){
}

/*template<class T>
void LinkedList<T>::insert(const T &data){
	Node<T>* newNode = new Node<T>(data);
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = newNode;
	}
}*/

template<class T>
void LinkedList<T>::displayList() {
	Node<T>* iter = head;
	if (iter != NULL){
		while (iter != tail){
			std::cout << iter->data << endl;
			iter = iter->next;
		}
		std::cout << iter->data << endl;
	}
}


#endif

#endif