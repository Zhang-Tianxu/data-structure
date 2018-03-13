//binary_sort_tree.cpp
#include <iostream>
#include "binary_sort_tree.h"
#include "linked_queue.h"



BiTNode* BiSortTree::getParents(BiTNode* p)
{
	LQ<BiTNode*> Q;
	BiTNode* q;
	q = this->Root();
	Q.EnQueue(q);
	while(!Q.isEmpty())
	{
		Q.DeQueue(q);
		if(q->lchild==p||q->rchild==p)
			return q;
		if(q->lchild)
			Q.EnQueue(q->lchild);
		if(q->rchild)
			Q.EnQueue(q->rchild);
	}
	std::cout << "There has no father of " << p->data << "\n";
	return NULL;
}

BiTNode* BiSortTree::getPresequence(BiTNode* p)
{
	BiTNode* pre;
	if(p->lchild==NULL)
		return NULL;
	else
	{
		pre = p->lchild;
		while(pre->rchild)
			pre = pre->rchild;
		return pre;
	}
}

BiTNode* BiSortTree::getSubsequence(BiTNode* p)
{//get the subsequence of p and return it
	//if the subsequence of p is empty ,return NULL

	BiTNode* sub;
	if(p->rchild==NULL)
		return NULL;
	else
	{
		sub = p->rchild;
		while(sub->lchild)
			sub = sub->lchild;
		return sub;
	}
}


bool BiSortTree::InsertElem(ElemType e)
{//insert element e into binary sort tree when it doesn't exist in the binary sort tree and maintain it as a binary sort tree
	if(this->Empty())
	{
		Append(e);
		return true;
	}
	BiTNode* p;
	p = this->Root();
	while(p)
	{
		if(e<p->data)
		{
			if(p->lchild)
				p=p->lchild;
			else
			{
				p->lchild = new BiTNode;
				if(!p->lchild)
				{
					std::cout << "fail to create node!" <<std::endl;
					return false;
				}
				p->lchild->data=e;
				return true;
			}

		}
		else if(e>p->data)
		{
			if(p->rchild)
				p=p->rchild;
			else
			{
				p->rchild=new BiTNode;
				if(!p->rchild)
				{
					std::cout << "fail to create node!" <<std::endl;
					return false;
				}
				p->rchild->data=e;
				return true;
			}
		}
		else
		{
			std::cout << "the element " << e << " is already in the binary sort tree." << std::endl;
			return false;
		}
	}
}

BiTNode* BiSortTree::Search(ElemType e)
{//search element e in binary tree
	if(this->Empty())
	{
		std::cout << "The BST is Empty!\n";
		return NULL;
	}
	BiTNode* p;
	p=this->Root();
	while(p)
	{
		if(e<p->data)
		{
			if(p->lchild)
				p=p->lchild;
			else
			{
				std::cout << "The element you search for is not exist!\n";
				return NULL;
			}
		}
		else if(e>p->data)
		{
			if(p->rchild)
				p=p->rchild;
			else
			{
				std::cout << "The element you search for is not exist!\n";
				return NULL;
			}
		}
		else
			return p;
	}
}

bool BiSortTree::DeleteElem(ElemType e)
{//delete element e from binary sort tree and maintain it as a binary sort tree
	using std::cout;
	using std::endl;
	if(this->Empty())
	{
		cout << "The binary sort tree is empty,delete failed!" << endl;
		return false;
	
	BiTNode* d;
	d = Search(e);
	if(d)
	{
		BiTNode* dp = getParents(d);
		if(d->lchild==NULL&&d->rchild==NULL)
			//if the element we want delete hasn't child
			//delete it directly
		{
			if(d==dp->lchild)
				dp->lchild = NULL;
			else
				dp->rchild = NULL;
			delete d;
		}
		else if(d->lchild==NULL)
			//if the element we want delete hasn't lift child
			//replace it by it's right child directly
		{
			if(d==dp->lchild)
				dp->lchild = d->rchild;
			else
				dp->rchild = d->rchild;
			delete d;
		}
		else if(d->rchild==NULL)
			//if the element we want delete hasn't right child
			//replace it by it's lift child directly
		{
			if(d==dp->lchild)
				dp->lchild = d->lchild;
			else
				dp->rchild = d->lchild;
			delete d;
		}
		else
		{
			//if the has both right child and lift child
			//replace it by it's sub-sequence and delete it's sub-sequence.(you can replace it by it's pre-sequence if you like.)
			BiTNode* ss;
			ss = getSubsequence(d);//ss hasn't lift child for sure
			d->data = ss->data;//replace d by it's sub-sequence
			dp = getParents(ss);//delete ss
			if(ss==dp->lchild)
				dp->lchild = ss->rchild;
			else
				dp->rchild = ss->rchild;
			delete ss;

		}
	}
	else
		cout << "The element you want delete is not exist!" << endl;
}
