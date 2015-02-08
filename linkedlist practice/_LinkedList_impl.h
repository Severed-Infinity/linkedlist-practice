/*#ifndef LINKED_LIST_IMPL_H
#define LINKED_LIST_IMPL_H

//#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList(){
}
template<class T>
LinkedList<T>::~LinkedList(){
}

template<class T>
void LinkedList<T>::insert(T data){
	Node<T>* newNode = Node<T>(data);
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = newNode;
	}
}

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


#endif*/