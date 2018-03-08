#include "double_linked_list.h"
#include <iostream>
#include <iomanip>

bool InitList(DLinkList &L)
{
	L=new struct DNode;
	L->prior = NULL;
	L->next = NULL;
}
int Length(DLinkList L)
{
	int i=0;
	struct DNode *tmp=L->next;
	while(tmp)
	{
		i++;
		tmp=tmp->next;
	}
	return i;
}
int LocateElem(DLinkList L,ElemType e)
{
	struct DNode *tmp = L->next;
	int i = 0;
	while(tmp->data!=e&&tmp->next!=NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if(tmp->data!=e&&tmp->next == NULL)
		return -1;
	else
		return i+1;
}
ElemType GetElem(DLinkList L,int i)
{
	if(i<1||(i>Length(L)))
		exit(-1);
	else
	{	
		int j;
		struct DNode *tmp = L->next;
		for(j=1;j<i;j++)
			tmp=tmp->next;
		return tmp->data;
	}
}


void CreatList(DLinkList &L)
{//creat a double linked list by head insert
	DLinkList p = L;
	ElemType e;
	int i = 1;
	struct DNode* tmp;
	std::cout << "Please input "<<i<<"th element of your list.(input 99999 if you want to end input.)\n";
	std::cin >> e;
	while(e!=99999)
	{
		tmp = new struct DNode;
		tmp->data = e;
		tmp->next = NULL;
		tmp->prior = p;
		p->next = tmp;
		p = tmp;
		std::cout << "Please input "<<i<<"th element of your list.(input 99999 if you want to end input.)\n";
		std::cin >> e;
	}
	std::cout << "input ended!"<<std::endl;
}


bool ListInsert(DLinkList &L,int i,ElemType e)
{
	if(i<0||i>(Length(L)+1)) return false;
	int j;
	DLinkList p = L;
	for(j=1;j<i;j++)
		p = p->next;
	struct DNode* tmp;
	tmp = new struct DNode;
	if(tmp == NULL) return false;
	tmp->data = e;
	tmp->next = p->next;
	tmp->prior = p;
	if(p->next)
		p->next->prior = tmp;
	p->next = tmp;
	return true;
}

bool ListDelete(DLinkList &L,int i,ElemType &e)
{
	if(i<0||i>Length(L)) return false;
	int j;
	DLinkList p = L;
	struct DNode* tmp;
	for(j=1;j<i;j++)
		p = p->next;
	tmp = p->next;
	e = tmp->data;
	p->next = tmp->next;
	if(tmp->next)
		tmp->next->prior = tmp->prior;
	tmp->next = NULL;
	tmp->prior =NULL;
	delete tmp;
	return true;
}

void PrintList(DLinkList L)
{
	struct DNode* p = L->next;
	while(p)
	{
		std::cout <<std::setw(10) << p->data;
		p=p->next;
	}
	std::cout<<std::endl;
}

bool Empty(DLinkList L)
{
	if(L->next)
		return false;
	else
		return true;
}
void DestroyList(DLinkList &L)
{
	struct DNode *p,*q;
	p = L->next;
	q = p->next;
	while(q)
	{
		delete p;
		p = q;
		q = p->next;
	}
	delete q;
	delete L;
}
