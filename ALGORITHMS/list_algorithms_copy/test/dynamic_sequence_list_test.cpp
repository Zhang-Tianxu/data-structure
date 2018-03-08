#include "dynamic_sequence_list.h"
#include <iostream>

int main()
{
	using namespace std;
	struct SeqList L;	
	InitList(L);
	cout << "Now the length of L is:" << Length(L)<<endl;
	cout << "Now the Maxsize of L is:" << Maxsize(L) << endl;
	int i;
	for(i=0;i<150;i++)
		ListInsert(L,(i+1),(i*10+10));
	cout << "Now the length of L is:" << Length(L)<<endl;
	cout << "Now the Maxsize of L is:" << Maxsize(L) << endl;
	cout << "Please input the element you are searching for."<<endl;
	ElemType tmp;
	cin >> tmp;
	cout << "the element which you are searching for is the " << LocateElem(L,tmp) << "th in L" << endl;
	cout << "Please input the number of the element you want." << endl;
	cin >> tmp;
	cout << "the " << tmp << "th element of L is "<< GetElem(L,tmp)<<endl;
	PrintList(L);
	DestroyList(L);
	return 0;
}
