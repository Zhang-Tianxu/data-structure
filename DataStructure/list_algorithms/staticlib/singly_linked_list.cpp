#include "singly_linked_list.h"
#include <iostream>
#include <iomanip>




SLinkList::SLinkList()
{
	LNode* tmp = new LNode;
	head = tmp;
	head->next = NULL;
}

SLinkList::~SLinkList()
{
		LNode *p,*q;
		p = head;
		q = p->next;
		while(q)
		{
			delete p;
			p = q;
			q = p->next;
		}
		delete q;
}

int SLinkList::Length()
{
	LNode* tmp = head;
	int i=0;
	while(tmp->next)
	{
		i++;
		tmp=tmp->next;
	}
	return i;
}

bool SLinkList::Empty()
{
	if(head->next)
		return false;
	else
		return true;
}

bool SLinkList::Append(ElemType e)
{
	LNode* p;
	p = head;
	while(p->next!=NULL)
		p = p->next;
	LNode* tmp = new LNode;
	tmp->data = e;
	tmp->next = NULL;
	p->next = tmp;
}
bool SLinkList::ListInsert(int i,ElemType e)
{
	if(i<0||i>(Length()+1)) return false;
	int j;
	LNode* p = head;
	for(j=1;j<i;j++)
		p = p->next;
	LNode* tmp = new LNode;
	if(tmp == NULL) return false;
	tmp->data = e;
	tmp->next = p->next;
	p->next = tmp;
}

int SLinkList::LocateElem(ElemType e)
{
	if(Length()==0) return -1;
	LNode* tmp = head;
	int i = 1;
	while((tmp->data != e)&&(tmp->next!=NULL))
	{
		tmp = tmp->next;
		i++;
	}
	if((tmp->next == NULL)&&(tmp->data != e))
		return -1;
	else return i;
}
ElemType SLinkList::GetElem(int i)
{
	if(i>0&&i<=Length())
	{
		LNode * tmp = head;
		int j;
		for(j=1;j<i;j++)
			tmp = tmp->next;
		return tmp->data;
	}
}

bool SLinkList::ListDelete(int i,ElemType &e)
{
	if(i<0||i>Length()) return false;
	int j;
	LNode*	p = head;
	LNode* tmp;
	for(j=1;j<i;j++)
		p = p->next;
	tmp = p->next;
	e = tmp->data;
	p->next = tmp->next;
	delete tmp;
}

void SLinkList::PrintList()
{
	LNode* p = head->next;
	while(p)
	{
		std::cout <<std::setw(10) << p->data;
		p=p->next;
	}
}
/*
bool InitList(SLinkList &L)
{
	L =new struct LNode;
	if(L==NULL)
		return false;
	else
	{
		L->next = NULL;
		return true;
	}
}


int Length(SLinkList L)
{
	SLinkList tmp = L;
	int i=0;
	while(tmp->next)
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
	while((tmp->data != e)&&(tmp->next!=NULL))
	{
		tmp = tmp->next;
		i++;
	}
	if((tmp->next == NULL)&&(tmp->data != e))
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
		tmp->next = NULL;
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
	while(p)
	{
		std::cout <<std::setw(10) << p->data;
		p=p->next;
	}
	std::cout<<std::endl;
}

bool Empty(SLinkList L)
{
	if(L->next)
		return false;
	else
		return true;
}
void DestroyList(SLinkList &L)
{
	LNode *p,*q;
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
}*/
