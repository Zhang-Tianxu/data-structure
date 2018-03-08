#ifndef _S_STACK
#define _S_STACK
#define MaxSize 50


typedef int ElemType;

struct SqStack
{
	ElemType data[MaxSize];
	int top;
};

void InitStack(SqStack &S);
bool StackEmpty(SqStack S);
bool Push(SqStack &S,ElemType e);
bool Pop(SqStack &S,ElemType &e);
bool GetTop(SqStack S,ElemType &e);

#endif
