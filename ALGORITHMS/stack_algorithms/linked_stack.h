#ifndef _LINKED_S
#define _LINKED_S

typedef int ElemType;
struct LSNode
{
	ElemType data;
	LSNode* next;
};
typedef struct LSNode *LStack;

void InitStack(LStack &S);
bool StackEmpty(LStack S);
bool Push(LStack &S,ElemType e);
bool Pop(LStack &S,ElemType &e);
bool GetTop(LStack S,ElemType &e);
#endif
