#ifndef _SEQUENCE_Q
#define _SEQUENCE_Q
#include <iostream>
//circular sequence queue
template <class T>
class SqQueue
{
private:
	enum {MaxSize = 50};
	T data[MaxSize];
	int front,rear;
public:
	SqQueue();
	bool isEmpty() const;
	bool isFull() const;
	bool EnQueue(const T e);
	bool DeQueue(T &e);
	int Length() const;
	~SqQueue();
};

template <class T>
SqQueue<T>::SqQueue()
{
	front = 0;
	rear = 0;
}

template <typename T>
bool SqQueue<T>::isEmpty() const
{
	if(front == rear)
		return true;
	else
		return false;
}

template <typename T>
bool SqQueue<T>::isFull() const
{
	if(rear+1 == front)
		return true;
	else
		return false;
}

template <typename T>
bool SqQueue<T>::EnQueue(const T e)
{
	if(this->isFull())
	       return false;
	data[rear] = e;
	rear = (rear+1)%MaxSize;
	return true;
}

template <typename T>
bool SqQueue<T>::DeQueue(T &e)
{
	if(this->isEmpty())
		return false;
	e = data[front];
	front = (front + 1)%MaxSize;
	return true;
}

template <typename T>
int SqQueue<T>::Length() const
{
	int l;
	l = (rear - front + MaxSize) % MaxSize;
	return l;
}

template <typename T>
SqQueue<T>::~SqQueue()
{
}

#endif
