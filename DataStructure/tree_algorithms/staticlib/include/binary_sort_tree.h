//binary_sort_tree.h
#ifndef BINARY_SORT_TREE_H
#define BINARY_SORT_TREE_H
#include "binary_tree.h"
class BiSortTree:public BiTree
{
	public:
		BiTNode* getParents(BiTNode* p);
		BiTNode* getPresequence(BiTNode* p);
		BiTNode* getSubsequence(BiTNode* p);
		bool InsertElem(ElemType e);
		BiTNode* Search(ElemType e);
		bool DeleteElem(ElemType e);

};
#endif
