#include "static_sequence_list.h"
#include <iostream>
#include <iomanip>
#include <malloc.h>



SqList::SqList()
{
	length=0;
}
SqList::~SqList()
{
	length = 0;
}

int SqList::Length()
{//return the length of L
	return length;
}

int SqList::LocateElem(ElemType e)
{
	int i=-1;
	for(i=1;i<=length;i++)
		if(data[i]==e)
			break;
	return i+1;

}

ElemType SqList::GetElem(int i)
{
	if(i>0&&i<=length)
		return data[i-1];
	else
		exit(-1);
}

bool SqList::ListInsert(int i,ElemType e)
{
	if(length == MaxSize) return false;
	else if(i>(length+1)||i<1) return false;
	else
	{
		int j;
		for(j=length;j>i;j--)
			data[j]=data[j-1];
		data[i-1]=e;
		length++;
		return true;
	}
}

bool SqList::ListDelete(int i,ElemType &e)
{
	if(length==0)
		return false;
	else if(i<1||i>length)
		return false;
	else
	{
		int j;
		e = data[i-1];
		for(j=i;j<length;j++)
			data[j-1]=data[j];
		length--;
		return true;
	}
}

void SqList::PrintList()
{
	int i;
	for(i=0;i<length;i++)
		std::cout <<std::setw(5)<< data[i];
	std::cout << std::endl;
}

bool SqList::Empty()
{
	return (length == 0);
}

