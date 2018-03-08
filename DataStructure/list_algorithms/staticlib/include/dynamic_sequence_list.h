#ifndef _DYNAMIC_SEQUENCE_LIST
#define _DYNAMIC_SEQUENCE_LIST


typedef int ElemType;
#define InitSize 100
#define IncreaseSize 100
struct SeqList
{
	int *data;
	int Maxsize,length;
};
void InitList(struct SeqList &L);
int Length(struct SeqList L);
int Maxsize(struct SeqList L);
int LocateElem(struct SeqList L,ElemType e);
ElemType GetElem(struct SeqList L,int i);
bool ListInsert(struct SeqList &L,int i,ElemType e);
void PrintList(struct SeqList L);
void DestroyList(struct SeqList &L);
#endif
