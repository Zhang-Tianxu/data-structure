#include "linked_stack.h"
#include <iostream>

void InitStack(LStack &S)
{
	S=new struct LSNode;
	S->next = NULL;
}
bool StackEmpty(LStack S)
{
	if(S->next == NULL)
		return true;
	else
		return false;
}
bool Push(LStack &S,ElemType e)
{
	LSNode *tmp = new LSNode;
	if(tmp == NULL)
		return false;
	tmp->data = e;
	tmp->next = S->next;
	S->next =tmp;
	return true;
}

bool Pop(LStack &S,ElemType &e)
{
	if(S->next == NULL)
		return false;
	else
	{
		LSNode *tmp;
		e = S->next->data;
		tmp = S->next;
		S->next = S->next->next;
		delete tmp;
	}
}

bool GetTop(LStack S,ElemType &e)
{
	if(S->next == NULL)
		return false;
	else
	{
		e=S->next->data;
		return true;
	}
}
