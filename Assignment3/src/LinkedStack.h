/*
 * LinkedStack.h
 *
 *  Created on: Oct 30, 2017
 *      Author: Betcher
 */

#ifndef LINKEDSTACK_H_
#define LINKEDSTACK_H_

template<class T>
struct Node
{
		T data;
		Node<T>* next;
};

template<class T>
class LinkedStack
{
		Node<T> *top;
	public:
		bool isEmpty();
		int getSize();
		T getTop();
		void push(T value);
		T pop();
};

template<class T>
inline bool LinkedStack<T>::isEmpty()
{
	return (top == NULL);
}

template<class T>
inline int LinkedStack<T>::getSize()
{
	int count = 0;
	Node<T>* currentPointer = top;
	while (currentPointer != NULL)
	{
		count++;
		currentPointer = currentPointer->next;
	}

	return count;
}

template<class T>
inline T LinkedStack<T>::getTop()
{
	return top->data;
}

template<class T>
inline void LinkedStack<T>::push(T value)
{
	Node<T>* newNode;
	newNode->data = value;

	if(isEmpty())
	{
		top = newNode;
	}
	else
	{
		newNode->next = top;
		top = newNode;
	}

}

template<class T>
inline T LinkedStack<T>::pop()
{
	T data = top->data;

	top = top->next;

	return data;
}

#endif /* LINKEDSTACK_H_ */