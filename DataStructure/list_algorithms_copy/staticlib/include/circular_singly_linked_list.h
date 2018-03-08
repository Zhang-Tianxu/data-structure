#ifndef _C_S_LINKED_LIST
#define _C_S_LINKED_LIST
typedef int ElemType;
struct LNode
{
	ElemType data;
	struct LNode *next;
};
typedef struct LNode *SLinkList;



int Length(SLinkList L);
int LocateElem(SLinkList &L,ElemType e);
ElemType GetElem(SLinkList L,int i);
void CreatList(SLinkList &L);
bool ListInsert(SLinkList &L,int i,ElemType e);
bool ListDelete(SLinkList &L,int i,ElemType &e);
void PrintList(SLinkList L);
bool Empty(SLinkList L);
bool InitList(SLinkList &L);
void DestroyList(SLinkList &L);
#endif
