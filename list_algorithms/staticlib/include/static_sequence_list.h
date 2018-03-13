#ifndef _STATIC_SEQUENCE_LIST
#define _STATIC_SEQUENCE_LIST


typedef int ElemType;//The element type is intger now,you can change it if need.
class SqList
{
	private:
		enum{MaxSize = 50};
		ElemType data[MaxSize];
		int length;
	public:
		SqList();
		~SqList();
		int Length();
		int LocateElem(ElemType e);
		ElemType GetElem(int i);
		bool ListInsert(int i,ElemType e);
		bool ListDelete(int i,ElemType &e);
		void PrintList();
		bool Empty();
};

/*
#define MaxSize 50
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
void DestroyList(struct SqList &L);*/
#endif
