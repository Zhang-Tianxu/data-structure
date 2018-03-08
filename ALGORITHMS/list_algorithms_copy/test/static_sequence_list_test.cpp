#include <iostream>
#include "static_sequence_list.h"
int main()
{
	using namespace std;
	struct SqList L;
	InitList(L);
	cout << "Now the length of L is "<<Length(L)<<endl;
	int i;
	int l;
	int tmp;
	cout <<"Please input the length of list."<<endl;
	cin >> l;
	for(i=0;i<l;i++)
	{
		cout << "the " << (i+1) <<"th element of list is:";
		cin >> tmp;
		ListInsert(L,i+1,tmp);
	}
	cout << "Now the length of L is "<<Length(L)<<endl;
	cout<<"Please input the element you want search in L:";
	cin >> tmp;
	if(LocateElem(L,tmp)>0)cout << "the element you input is "<<LocateElem(L,tmp)<<"th element in L"<<endl;
	else cout << "the element you input not funded"<<endl;
	cout << "which element do you want to delete?num:";
	int d;
	cin >>d;
	cout << GetElem(L,d);
	ListDelete(L,d,tmp);
	cout << tmp <<"deleted"<<endl;

	cout << "Now the length of L is "<<Length(L)<<endl;
	PrintList(L);
	return 0;
	
}
