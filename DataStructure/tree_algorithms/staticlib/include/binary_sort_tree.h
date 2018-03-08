//binary_sort_tree.h
#ifndef BINARY_SORT_TREE_H
#define BINARY_SORT_TREE_H
#include "binary_tree.h"
class BiSortTree:public BiTree
{
	public:
		bool InsertElem(ElemType e);
		bool Search(ElemType e);
		bool DeleteElem(ElemType e);

};
#endif
