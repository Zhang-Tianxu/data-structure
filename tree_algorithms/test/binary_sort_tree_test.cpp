#include "binary_sort_tree.h"
#include <iostream>

int main()
{
	using namespace std;
	BiSortTree T;
	//test Empty()
	if(T.Empty())
		cout << "The binary tree is empty!" << endl;
	else 
		cout << "The binary tree is not empty!" <<endl;
	//test InsertElem()
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

	//test Search() getParents() getPresequence() getSubsequence()
	cout << "Please input the num you want search for:";
	cin >> input;
	BiTNode* s = T.Search(input);
	if(s!=NULL)
	{
		BiTNode* p;
		BiTNode* ps;
		BiTNode* ss;
		p = T.getParents(s);
		ps=T.getPresequence(s);
		ss=T.getSubsequence(s);
		cout << "The num you search for is exist\n";
		if(p)
			cout << "The parents of the num you search for is " << p->data << endl;
		else
			cout << "There is no parents of " << input << endl;
		if(ps)
			cout << "The presequence of the num you search for is " << ps->data <<endl;
		else
			cout << "There is no presequence of " << input << endl;
		if(ss)
			cout << "The subsequence of the num you search for is " << ss->data <<endl;
		else
			cout << "There is no subsequence of " << input << endl;
	}
	else
		cout << "The num you search for is not exit\n";
	//test Depth() PreOrderTraverse() InOrderTraverse() PostOrderTraverse() LevelOrderTraverse()
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

	//test DeleteElem()
	cout << "Please enter the num you want delete:";
	cin >> input;
	T.DeleteElem(input);
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
