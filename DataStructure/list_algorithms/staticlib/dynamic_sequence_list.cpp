#include "dynamic_sequence_list.h"
#include <iostream>
#include <iomanip>

void InitList(struct SeqList &L)
{
	L.data = new ElemType[InitSize];
	L.Maxsize = InitSize;
	L.length = 0;
}

int Length(struct SeqList L)
{
	return L.length;
}
int Maxsize(struct SeqList L)
{
	return L.Maxsize;
}

int LocateElem(struct SeqList L,ElemType e)
{
	if(L.length ==0) return -1;
	int i;
	for(i=1;i<=L.length;i++)
		if(L.data[i-1] == e) break;
	if(i<=L.length)
		return i;
	else return -1;
}

ElemType GetElem(struct SeqList L,int i)
{
	if(i>0&&i<=L.length)
		return L.data[i-1];
	else
		exit(-1);
}

bool ListInsert(struct SeqList &L,int i,ElemType e)
{
	if(i<1||i>(L.length+1))
		return false;
	else
	{
		int j;
		if(L.Maxsize == L.length)
		{
			ElemType *tmp = new ElemType[L.Maxsize + IncreaseSize];
			if(tmp == 0) return false;
			for(j=0;j<L.length;j++)
				tmp[j] = L.data[j];
			delete [] L.data;
			L.data = tmp;
			L.Maxsize += IncreaseSize;
		}
		for(j=L.length;j>=i;j--)
			L.data[j] = L.data[j-1];
		L.data[i-1]= e;
		L.length++;
		return true;
	}
}

void PrintList(struct SeqList L)
{
	using namespace std;
	int i;
	for(i=0;i<L.length;i++)
		cout << setw(5) << L.data[i];
	cout << endl;
}

void DestroyList(struct SeqList &L)
{
	delete [] L.data;
	L.length = 0;
}
