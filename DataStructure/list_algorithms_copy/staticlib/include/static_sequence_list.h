#ifndef _STATIC_SEQUENCE_LIST
#define _STATIC_SEQUENCE_LIST
#define MaxSize 50
typedef int ElemType;//The element type is intger now,you can change it if need.
struct SqList
{
	ElemType data[MaxSize];
	int length;
};

void InitList(struct SqList &L);
int Length(struct SqList L);
int LocateElem(struct SqList L,int e);
ElemType GetElem(struct SqList L,int i);
bool ListInsert(struct SqList &L,int i,int e);
bool ListDelete(struct SqList &L,int i,int &e);
void PrintList(struct SqList L);
bool Empty(struct SqList L);
void DestroyList(struct SqList &L);
#endif
