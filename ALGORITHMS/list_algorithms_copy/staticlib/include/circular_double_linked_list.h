#ifndef _C_D_LINKED_LIST
#define _C_D_LINKED_LIST
struct DNode
{
	int data;
	struct DNode *prior,*next;
};
typedef int ElemType;
typedef struct DNode *DLinkList;


bool InitList(DLinkList &L);
int Length(DLinkList L);
int LocateElem(DLinkList L,ElemType e);
ElemType GetElem(DLinkList L,int i);
void CreatList(DLinkList &L);
bool ListInsert(DLinkList &L,int i,ElemType e);
bool ListDelete(DLinkList &L,int i,ElemType &e);
void PrintList(DLinkList L);
bool Empty(DLinkList L);
void DestroyList(DLinkList &L);
#endif
