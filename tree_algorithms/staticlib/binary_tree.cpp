//binary_tree.cpp
#include <iostream>
#include <iomanip>
#include "binary_tree.h"
#include "linked_queue.h"

BiTNode::BiTNode()
{
	lchild = NULL;
	rchild = NULL;
}

BiTree::BiTree()
{
	root = NULL;
}

bool BiTree::Append(ElemType e)
{//template Queue
	if(!root)
	{
		root = new BiTNode;
		root->data = e;
		return true;
	}
	BiTNode* p;
	LQ<BiTNode*> Q;
	p = root;
	Q.EnQueue(p);
	while(!Q.isEmpty())
	{
		Q.DeQueue(p);
		if(p->lchild)
		{
			Q.EnQueue(p->lchild);
			if(p->rchild)
			{
				Q.EnQueue(p->rchild);
			}
			else
			{
				BiTNode* tmp = new BiTNode;
				tmp->data = e;
				p->rchild = tmp;
				return true;
			}
		}
		else
		{
			BiTNode* tmp = new BiTNode;
			tmp->data = e;
			p->lchild = tmp;
			return true;
		}

	}

	return false;
}

bool BiTree::Empty()
{
	if(root == NULL)
		return true;
	else return false;
}

BiTNode* BiTree::Root()
{
	return root;
}

int BiTree::Depth(BiTNode* p)
{//circular method
	if(p==NULL)
		return 0;
	else
	{
		int ld=Depth(p->lchild);
		int rd=Depth(p->rchild);
		return (ld>rd?ld:rd) + 1;
	}
}

/*
 *programe a non-circular method of Depth()
 *
 * 
 * */

int BiTree::Depth()
{
	LQ<BiTNode*> Q;
	BiTNode* p;
	p = root;
	int level = 0;
	int len;
	Q.EnQueue(p);
	while(!Q.isEmpty())
	{
		len = Q.Length();
		while(len--)
		{
			Q.DeQueue(p);
			if(p->lchild)
				Q.EnQueue(p->lchild);
			if(p->rchild)
				Q.EnQueue(p->rchild);
		}
		level++;
	}
	return level;
}
void Print(BiTNode* p)
{
	std::cout <<std::setw(10) << p->data;
}

void BiTree::PreOrderTraverse(BiTNode* p,void (*visit)(BiTNode*))
{
	if(p)
	{
		(*visit)(p);
		if(p->lchild)
			PreOrderTraverse(p->lchild,visit);
		if(p->rchild)
			PreOrderTraverse(p->rchild,visit);
	}
}
void BiTree::InOrderTraverse(BiTNode* p,void (*visit)(BiTNode*))
{
	if(p)
	{
		if(p->lchild)
			InOrderTraverse(p->lchild,visit);
		(*visit)(p);
		if(p->rchild)
			InOrderTraverse(p->rchild,visit);
	}
}

void BiTree::PostOrderTraverse(BiTNode* p,void (*visit)(BiTNode*))
{
	if(p)
	{
		if(p->lchild)
			PostOrderTraverse(p->lchild,visit);
		if(p->rchild)
			PostOrderTraverse(p->rchild,visit);
		(*visit)(p);
	}
}

void BiTree::LevelOrderTraverse(void (*visit)(BiTNode*))
{
	LQ<BiTNode*> Q;
	BiTNode* p;
	p = root;
	Q.EnQueue(p);
	while(!Q.isEmpty())
	{
		Q.DeQueue(p);
		(*visit)(p);
		if(p->lchild)
			Q.EnQueue(p->lchild);
		if(p->rchild)
			Q.EnQueue(p->rchild);
	}
}
void Destroy(BiTNode* p)
{
	delete p;
}
BiTree::~BiTree()
{
	PostOrderTraverse(root,Destroy);
}
