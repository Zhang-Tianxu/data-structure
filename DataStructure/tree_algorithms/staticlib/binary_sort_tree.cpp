//binary_sort_tree.cpp
#include <iostream>
#include "binary_sort_tree.h"


/*BiTNode* BiSortTree::getFather(BiTNode* p)
  {

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
*/

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

bool BiSortTree::Search(ElemType e)
{//search element e in binary tree
	if(this->Empty())
		return false;
	BiTNode* p;
	p=this->Root();
	while(p)
	{
		if(e<p->data)
		{
			if(p->lchild)
				p=p->lchild;
			else
				return false;
		}
		else if(e>p->data)
		{
			if(p->rchild)
				p=p->rchild;
			else
				return false;
		}
		else
			return true;
	}
}
/*
   bool BiSortTree::DeleteElem(ElemType e)
   {//delete element e from binary sort tree and maintain it as a binary sort tree
   using std::cout;
   using std::endl;
   if(root == NULL)
   {
   cout << "The binary sort tree is empty,delete failed!" << endl;
   return false;
   }
   if(root->data == e)
   {
   BiTNode* p = getSubsequence(root);
   p->lchild = root->lchild;
   p->rchild = root->rchild;
   }
   BiTNode* q;
   BiTNode* p;
   q = root;
   if(e<root->data)
   {
   if(root->lchild)
   p=root->lchild;
   else
   {
   cout << "There is no element " << e << " in the binary sort tree,delete failed!" <<endl;
   return false;
   }
   }
   else
   {
   if(root->rchild)
   p=root->rchild;
   else
   {

   cout << "There is no element " << e << " in the binary sort tree,delete failed!" <<endl;
   return false;
   }
   }
//now q is the parents of p
//we have to maintain it until we find e
while(p)
{
if(e<p->data)
{
if(p->lchild)
p=p->lchild;
else
{
cout << "There is no element " << e << " in the binary sort tree,delete failed!" <<endl;
return false;
}

}
else if(e>p->data)
{
if(p->rchild)
p=p->rchild;
else
{
cout << "There is no element " << e << " in the binary sort tree,delete failed!" <<endl;
return false;
}
}
else
{//find the subsequence of p and replace p by it
BiTNode* tmp;
tmp = getSubsequence(p);
p->data = tmp->data;
delete tmp;
cout << "delete success!" <<endl;
return true;
}
}
}*/
