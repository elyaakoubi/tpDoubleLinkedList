#ifndef LINKEDLIST_H
#define LINKEDLIST_H
using namespace std;
#include "Node.h"

template<typename T>
class LinkedList
{
	private:
		Node<T>* first;
		Node<T>* last;
		int length;
		
	public:
		// Default constructor
		LinkedList();
		// Destructor
		~LinkedList();
		// Check if the list is empty	
		bool isEmpty();
		//Getters
		int getLength();
		Node<T>* getFirst();
		Node<T>* getLast();
		Node<T>* get(int);
		// Add a new element to the beginning of the list
		void addFirst(T*);
		// Add a new element to the end of the list
		void addLast(T*);
		// Add a new element at the specified index
		bool add(T*,int);
		// Display the elements in the list
		void display();
		// Remove the first element from the list
		bool removeFirst();
		// Remove the last element from the list
		bool removeLast();
	    // Remove the element at the specified index	
		bool remove(int);
		// Check if the list contains the specified element
		bool contains(T*);
		// Remove the first occurrence of the specified element
		bool remove(T*);
};

template<typename T>
LinkedList<T>::LinkedList(){
	first=NULL;
	last=NULL;
	length=0;
}

template<typename T>
LinkedList<T>::~LinkedList(){
	Node<T>* tmp = first;
    while(first)
	{
		first=first->getNext();
		delete tmp;
		tmp=first;
	}
		
}

template<typename T>
bool LinkedList<T>::isEmpty(){
	return !first;
	 
}

template<typename T>
int LinkedList<T>::getLength(){
	return length;
}

template<typename T>
Node<T>* LinkedList<T>::getFirst(){
	return first;
}

template<typename T>
Node<T>* LinkedList<T>::getLast(){
	return last;
}


#endif
