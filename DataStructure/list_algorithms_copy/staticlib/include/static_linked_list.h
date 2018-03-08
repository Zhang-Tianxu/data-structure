#ifndef _STATIC_LINKED_LIST
#define _STATIC_LINKED_LIST
#define MaxSize 50
typedef int ElemType;
struct StaticLinkList
{
	//if next==-1 means the end
	//if next==-2 means this node is empty
	ElemType data;
	int next;
};

void InitList(StaticLinkList *L);
int Length(StaticLinkList L[]);
int LocateElem(StaticLinkList L[],ElemType e);
ElemType GetElem(StaticLinkList L[],int i);
bool ListInsert(StaticLinkList *L,int i,ElemType e);
bool ListDelete(StaticLinkList *L,int i,ElemType &e);
void PrintList(StaticLinkList L[]);
bool Empty(StaticLinkList L[]);
void DestroyList(StaticLinkList *L);
#endif
