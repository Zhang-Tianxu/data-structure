//binary_tree.h
#ifndef _TREE_H
#define _TREE_H

typedef int ElemType;


class BiTNode
{
	private:
	public:
		BiTNode* lchild;
		BiTNode* rchild;
		ElemType data;
		BiTNode();
};

class BiTree
{
	private:
		BiTNode* root;
	public:
		BiTree();
		~BiTree();
		bool Empty();
		bool Append(ElemType e);
		int Depth(BiTNode* p);
		int Depth();
		BiTNode* Root();
		void PreOrderTraverse(BiTNode* p,void (*visit)(BiTNode*));
		void InOrderTraverse(BiTNode* p,void (*visit)(BiTNode*));
		void PostOrderTraverse(BiTNode* p,void (*visit)(BiTNode*));
		void LevelOrderTraverse(void (*visit)(BiTNode*));
};
void Print(BiTNode* p);
#endif
