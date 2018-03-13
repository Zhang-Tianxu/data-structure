#include "sequence_stack.h"

void InitStack(SqStack &S)
{
	S.top = -1;
}
bool StackEmpty(SqStack S)
{
	if(S.top == -1)
		return true;
	else return false;
}
bool Push(SqStack &S,ElemType e)
{
	if(S.top==MaxSize-1)
		return false;
	S.data[++S.top]=e;
	return true;
}
bool Pop(SqStack &S,ElemType &e)
{
	if(S.top==-1)
		return false;
	e=S.data[S.top--];
	return true;
}
bool GetTop(SqStack S,ElemType &e)
{
	if(S.top == -1)
		return false;
	e = S.data[S.top];
	return true;
}
