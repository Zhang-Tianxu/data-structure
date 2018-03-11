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
	cout << "Please input the num you want insert in BST\n(input 99999 to end the input\n";
	cin >> input;
	while(input != 99999)
	{
		T.InsertElem(input);
		cout << "Please input the num you want insert in BST\n(input 99999 to end the input\n";
		cin >> input;
	}
	/*T.Append(input);
	  T.Append(2);
	  T.Append(3);
	  T.Append(4);
	  T.Append(5);*/

	cout << "Please input the num you want search for:";
	cin >> input;
	if(T.Search(input))
		cout << "The num you search for is exist\n";
	else
		cout << "The num you search for is not exit\n";


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
