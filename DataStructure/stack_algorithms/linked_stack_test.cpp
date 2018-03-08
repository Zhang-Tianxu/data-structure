#include "linked_stack.h"
#include <iostream>

int main()
{
	using namespace std;
	LStack S;
	InitStack(S);
	if(StackEmpty(S))
		cout << "Stack is empty!" <<endl;
	else
		cout << "Stack is not empty!"<< endl;
	int i;
	ElemType tmp;
	cout << "Please enter the number you want push.(input 99999 to end)" <<endl;
	cin >> tmp;
	while(tmp != 99999)
	{
		Push(S,tmp);
		cin >> tmp;
	}
	cout << endl;
	if(StackEmpty(S))
		cout << "Stack is empty!" <<endl;
	else
		cout << "Stack is not empty!"<< endl;
	GetTop(S,tmp);
	cout << "the top value of stack is "  << tmp << endl;
	while(!StackEmpty(S))
	{
		Pop(S,tmp);
		cout << "   " << tmp;
	}
	cout << endl;
	return 0;
}
