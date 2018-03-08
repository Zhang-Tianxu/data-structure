#ifndef _S_LINKED_LISTr
#define _S_LINKED_LIST
#include <iostream>
typedef int ElemType;

class LNode
{
	public:
		LNode(ElemType n_data = 0,LNode* n_next = NULL):data(n_data),next(n_next){};//inline method
		ElemType data;
		LNode* next;
};
class SLinkList
{
	private:
		LNode* head;
	public:
		SLinkList();
		~SLinkList();
		bool Append(ElemType e);
		bool Empty();
		int Length();
		int LocateElem(ElemType e);
		ElemType GetElem(int i);
		bool ListInsert(int i,ElemType e);
		bool ListDelete(int i,ElemType &e);
		void PrintList();

};
/*
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
void DestroyList(SLinkList &L);*/
#endif
