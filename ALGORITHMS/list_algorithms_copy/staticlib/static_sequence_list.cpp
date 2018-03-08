#include "static_sequence_list.h"
#include <iostream>
#include <iomanip>
#include <malloc.h>


void InitList(struct SqList &L)
{//creat a empty list
	L.length = 0;
}
int Length(struct SqList L)
{//return the length of L
	return L.length;
}

int LocateElem(struct SqList L,ElemType e)
{
	int i=-1;
	for(i=1;i<=L.length;i++)
		if(L.data[i]==e)
			break;
	return i;

}

ElemType GetElem(struct SqList L,int i)
{
	if(i>0&&i<=L.length)
		return L.data[i-1];
	else
		exit(-1);
}

bool ListInsert(struct SqList &L,int i,ElemType e)
{
	if(L.length == MaxSize) return false;
	else if(i>(L.length+1)||i<1) return false;
	else
	{
		int j;
		for(j=L.length;j>i;j--)
			L.data[j]=L.data[j-1];
		L.data[i-1]=e;
		L.length++;
		return true;
	}
}

bool ListDelete(struct SqList &L,int i,ElemType &e)
{
	if(L.length==0)
		return false;
	else if(i<1||i>L.length)
		return false;
	else
	{
		int j;
		e = L.data[i-1];
		for(j=i;j<L.length;j++)
			L.data[j-1]=L.data[j];
		L.length--;
		return true;
	}
}

void PrintList(struct SqList L)
{
	int i;
	for(i=0;i<L.length;i++)
		std::cout <<std::setw(5)<< L.data[i];
	std::cout << std::endl;
}

bool Empty(struct SqList L)
{
	return (L.length == 0);
}

void DestroyList(struct SqList &L)
{
	L.length = 0;
}
