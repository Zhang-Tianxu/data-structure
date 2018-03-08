#include "singly_linked_list.h"
#include <iostream>

int main()
{
	using namespace std;
	SLinkList L;
	if(L.Empty()) cout << "the list is empty now!" << endl;
	else cout << "the list is not empty now!" <<endl;
//	CreatList();


	int i;
	for(i=0;i<3;i++)
		L.Append(((i+1)*10));
	cout << "end of append!" <<endl;
	cout << "the length of list is " <<L.Length() <<endl;
	for(i=3;i<10000;i++)
		L.ListInsert(i,i*10);
	cout << "the length of list is " <<L.Length() <<endl;
	if(L.Empty()) cout << "the list is empty now!" << endl;
	else cout << "the list is not empty now!" <<endl;
	cout << "Please input the number of element which you want delete." <<endl;
	ElemType tmp;
	cin >> i;
	L.ListDelete(i,tmp);
	cout << "the element you have deleted is " << tmp << endl;
	cout << "the length of list is " <<L.Length() <<endl;
	cout << "Please input the number of the element you want." <<endl;
	cin >> i;
	cout << "the element you want is " << L.GetElem(i)<<endl;
	cout << "Please input the value of element you want search." <<endl;
	cin >> tmp;
	cout << "the element you search for is No."<<L.LocateElem(tmp)<<endl;
	L.PrintList();
	return 0;
}
