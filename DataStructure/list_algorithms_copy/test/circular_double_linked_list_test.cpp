#include "circular_double_linked_list.h"
#include <iostream>

int main()
{
	using namespace std;
	DLinkList L;
	InitList(L);
	if(Empty(L)) cout << "the list is empty now!" << endl;
	else cout << "the list is not empty now!" <<endl;
	CreatList(L);
	cout << "the length of list is " <<Length(L) <<endl;
	int i;
	for(i=3;i<100;i++)
		ListInsert(L,i,i*10);
	cout << "the length of list is " <<Length(L) <<endl;
	if(Empty(L)) cout << "the list is empty now!" << endl;
	else cout << "the list is not empty now!" <<endl;
	cout << "Please input the number of element which you want delete." <<endl;
	ElemType tmp;
	cin >> i;
	ListDelete(L,i,tmp);
	cout << "the element you have deleted is " << tmp << endl;
	cout << "the length of list is " <<Length(L) <<endl;
	cout << "Please input the number of the element you want." <<endl;
	cin >> i;
	cout << "the element you want is " << GetElem(L,i)<<endl;
	cout << "Please input the value of element you want search." <<endl;
	cin >> tmp;
	cout << "the element you search for is No."<<LocateElem(L,tmp)<<endl;
	PrintList(L);
	DestroyList(L);
	return 0;
}
