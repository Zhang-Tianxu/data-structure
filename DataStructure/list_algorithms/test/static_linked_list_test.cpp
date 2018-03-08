#include <iostream>
#include "static_linked_list.h"
int main()
{
	using namespace std;
	StaticLinkList L;
	cout << "Now the length of L is "<<L.Length()<<endl;
	int i;
	int l;
	int tmp;
	cout <<"Please input the length of list."<<endl;
	cin >> l;
	for(i=0;i<l;i++)
	{
		cout << "the " << (i+1) <<"th element of list is:";
		cin >> tmp;
		L.ListInsert(i+1,tmp);
	}
	cout << "Now the length of L is "<<L.Length()<<endl;
	cout<<"Please input the element you want search in L:";
	cin >> tmp;
	if(L.LocateElem(tmp)>0)
		cout << "the element you input is "<<L.LocateElem(tmp)<<"th element in L"<<endl;
	else 
		cout << "the element you input not funded"<<endl;
	cout << "which element do you want to delete?num:";
	
	int d;
	cin >>d;
	L.ListDelete(d,tmp);
	cout << tmp <<"deleted"<<endl;

	cout << "Now the length of L is "<<L.Length()<<endl;
	L.PrintList();
	return 0;
	
}
