#include "binary_sort_tree.h"
#include <iostream>

int main()
{
	using namespace std;
	BiSortTree T;
	if(T.Empty())
		cout << "The binary tree is empty!" << endl;
	else 
		cout << "The binary tree is not empty!" <<endl;
	ElemType input;
	cout << "Please enter the data you want insert into the root of tree."<<endl;
	cin >> input;
	T.Append(input);
	T.Append(2);
	T.Append(3);
	T.Append(4);
	T.Append(5);
	cout << "The depth of binary tree is " << T.Depth()<<endl;
	cout << "The pre-order-traverse of binary tree is:" <<endl;
	T.PreOrderTraverse(T.Root(),Print);
	cout << endl;
	cout << "The in-order-traverse of binary tree is:" <<endl;
	T.InOrderTraverse(T.Root(),Print);
	cout << endl;
	cout << "The post-order-traverse of binary tree is:" <<endl;
	T.PostOrderTraverse(T.Root(),Print);
	cout << endl;
	cout << "The level-order-traverse of binary tree is:" <<endl;
	T.LevelOrderTraverse(Print);
	cout << endl;
	return 0;

}
