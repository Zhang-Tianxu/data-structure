#ifndef _LINKED_Q
#define _LINKED_Q
#include <iostream>
//linked queue

template <typename T>
class QNode
{
	public:
		QNode* next;
		T data;
		QNode();
		~QNode();
};
	template <typename T>
QNode<T>::QNode()
{
	next = NULL;
}
	template <typename T>
QNode<T>::~QNode()
{//do nothing

}


template <typename T>
class LQ
{
	public:
		QNode<T>* head;
		QNode<T>* rear;
		int length;
		LQ();
		bool isEmpty() const;
		//bool isFull() const;
		bool EnQueue(const T e);
		bool DeQueue(T &e);
		int Length() const;
		~LQ();
};

	template <typename T>
LQ<T>::LQ()
{
	head = NULL;
	rear = NULL;
	length = 0;
}

template <typename T>
bool LQ<T>::isEmpty() const
{
	if(length == 0)
		return true;
	else
		return false;
}
/*
   template <typename T>
   bool SqQueue<T>::isFull() const
   {
   if(rear+1 == front)
   return true;
   else
   return false;
   }
   */
	template <typename T>
bool LQ<T>::EnQueue(const T e)
{
	QNode<T>* p = new QNode<T>;
	if(!p)
		return false;
	p->next = NULL;
	p->data = e;
	if(length!=0)
	{
		rear->next = p;
		rear = p;
	}
	else
	{
		head = p;
		rear = p;
	}
	length++;
	return true;
}

	template <typename T>
bool LQ<T>::DeQueue(T &e)
{
	if(length==0)
		return false;
	QNode<T>* p;
	if(length!=1)
	{
		p = head;
		head = p->next;
		e = p->data;
		delete p;
	}
	else
	{
		p = head;
		head = NULL;
		rear = NULL;
		e = p->data;
		delete p;
	}
	length--;
	return true;
}

template <typename T>
int LQ<T>::Length() const
{
	return length;
}

	template <typename T>
LQ<T>::~LQ()
{
	QNode<T>* p;
	p = head;
	while(p)
	{
		head = p->next;
		delete p;
		p = head;
	}
	head = rear = NULL;
}

#endif
