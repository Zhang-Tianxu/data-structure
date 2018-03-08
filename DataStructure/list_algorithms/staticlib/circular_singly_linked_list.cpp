#include "circular_singly_linked_list.h"
#include <iostream>
#include <iomanip>

bool InitList(SLinkList &L)
{
	L =new struct LNode;
	if(L==NULL)
		return false;
	else
	{
		L->next = L;
		return true;
	}
}


int Length(SLinkList L)
{
	SLinkList tmp = L;
	int i=0;
	while((tmp->next)!=L)
	{
		i++;
		tmp=tmp->next;
	}
	return i;
}

int LocateElem(SLinkList &L,ElemType e)
{
	if(Length(L)==0) return -1;
	LNode* tmp = L->next;
	int i = 1;
	while((tmp->data != e)&&(tmp->next!=L))
	{
		tmp = tmp->next;
		i++;
	}
	if((tmp->next == L)&&(tmp->data != e))
		return -1;
	else return i;
	
}


ElemType GetElem(SLinkList L,int i)
{
	if(i>0&&i<=Length(L))
	{
		LNode * tmp = L->next;
		int j;
		for(j=1;j<i;j++)
			tmp = tmp->next;
		return tmp->data;
	}
	else exit(-1);
}


void CreatList(SLinkList &L)
{//creat a singly linked list by head insert
	SLinkList p = L;
	ElemType e;
	int i = 1;
	LNode* tmp;
	std::cout << "Please input "<<i<<"th element of your list.(input 99999 if you want to end input.)\n";
	std::cin >> e;
	while(e!=99999)
	{
		tmp = new struct LNode;
		tmp->data = e;
		tmp->next = L;
		p->next = tmp;
		p = tmp;
		std::cout << "Please input "<<i<<"th element of your list.(input 99999 if you want to end input.)\n";
		std::cin >> e;
	}
	std::cout << "input ended!"<<std::endl;
}


bool ListInsert(SLinkList &L,int i,ElemType e)
{
	if(i<0||i>(Length(L)+1)) return false;
	int j;
	SLinkList p = L;
	for(j=1;j<i;j++)
		p = p->next;
	LNode* tmp;
	tmp = new LNode;
	if(tmp == NULL) return false;
	tmp->data = e;
	tmp->next = p->next;
	p->next = tmp;
	return true;
}

bool ListDelete(SLinkList &L,int i,ElemType &e)
{
	if(i<0||i>Length(L)) return false;
	int j;
	SLinkList p = L;
	LNode* tmp;
	for(j=1;j<i;j++)
		p = p->next;
	tmp = p->next;
	e = tmp->data;
	p->next = tmp->next;
	delete tmp;
	return true;
}

void PrintList(SLinkList L)
{
	LNode* p = L->next;
	while(p->next!=L->next)
	{
		std::cout <<std::setw(10) << p->data;
		p=p->next;
	}
	std::cout<<std::endl;
}

bool Empty(SLinkList L)
{
	if(L->next!=L)
		return false;
	else
		return true;
}
void DestroyList(SLinkList &L)
{
	LNode *p,*q;
	p = L->next;
	q = p->next;
	while(q->next!=L)
	{
		delete p;
		p = q;
		q = p->next;
	}
	delete q;
	delete L;
}
