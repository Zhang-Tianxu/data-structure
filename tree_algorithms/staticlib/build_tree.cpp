#include "tree.h"
#include <iostream>

void BuildTree(struct BiTree T)
{
	struct BiTree p;
	p = T;
	int input;
	char flag;
	char mark = 'l';
	cout << "if you want build a empty tree please input n" << endl;
	cin >> flag;
	if(flag == 'n')
	{
		T.lchild = NULL;
		T.rchild = NULL;
	}
	while(flag=='y')
	{
		cin >> input;
		struct BiTNode tmp;
		tmp.data=input;
		if(mark == 'l')
			p.lchild = tmp;	
		else if(flag == 'r')
			T.rchild = tmp;
	}	
}

int main()
{

