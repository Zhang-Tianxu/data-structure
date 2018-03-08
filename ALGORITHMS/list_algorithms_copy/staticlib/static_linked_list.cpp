#include <iostream>
#include "static_linked_list.h"
#include <iomanip>


StaticLinkList::StaticLinkList()
{
	next[0] = -1;
	int i;
	for(i=1;i<MaxSize;i++)
	{
		next[i]=-2;
	}	
}
void InitList(StaticLinkList *L)
{
	L[0].next = -1;
	int i;
	for(i=1;i<MaxSize;i++)
		L[i].next=-2;
}

int StaticLinkList::Length()
{
	int count=0;
	int l=next[0];
	while(l !=-1)
	{
		count++;
		l=next[l];
	}
	return count;
}

int StaticLinkList::LocateElem(ElemType e)
{
	int i=1;
	while(data[i]!=e)
		i++;
	if(data[i]==e) return i;
	else return -1;
}

ElemType StaticLinkList::GetElem(int i)
{
	if(i<1||i>Length())
		exit(-1);
	int j = 1;
	int p = 1;
	for(;j<i;j++)
		p=next[p];
	return data[p];
}

int StaticLinkList::GetEmpty()
{
	int i;
	for(i=1;i<MaxSize;i++)
		if(next[i] == -2)
			break;
	if(i!=MaxSize)
		return i;
	else
		return -1;
}

bool StaticLinkList::ListInsert(int i,ElemType e)
{
	if(i<1||i>Length()+1)
		return false;
	if(Length()==MaxSize-1)
		return false;
	int j=1;
	int p=0;
	for(;j<i;j++)
		p=next[p];
	int empty=GetEmpty();
	data[empty]=e;
	next[empty] = next[p];
	next[p] =empty;
}

bool StaticLinkList::ListDelete(int i,ElemType &e)
{
	int j=1;
	int p=0;
	int tmp;
	for(;j<i;j++)
		p=next[p];
	e = data[next[p]];
	tmp = next[next[p]];
	next[next[p]]=-2;
	next[p] = tmp;
}

void StaticLinkList::PrintList()
{
	using namespace std;
	int i=next[0];
	while(i!=-1)
	{
		cout<<setw(5) << data[i];
		i=next[i];
	}
	cout << endl;

}

bool StaticLinkList::Empty()
{
	if(next[0])
		return false;
	else return true;
}

StaticLinkList::~StaticLinkList()
{
	next[0] = -1;
	int i;
	for(i=1;i<MaxSize;i++)
		ext[i] = -2;
}
