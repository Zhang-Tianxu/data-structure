#ifndef _LIST_H
#define _LIST_H


//#######################SWQUENCE LIST#########################################
//*********************static sequence list*************************************
#define MaxSize 50
struct SqList
{
	int data[MaxSize];
	int length;
};

//********************dynamic sequence list*************************************
#define InitSize 100
struct SeqList
{
	int *data;
	int Maxsize,length;
};



//###############################LINKED LIST#########################################
//***************************singly linked list******************************************
struct LNode
{
	int data;
	struct LNode *next;
}LNode,*SLinkList;

//***************************circular singly linked list*********************************
//data structure is same with uncircular singly linked list


//***************************double linked list******************************************
struct DNode
{
	int data;
	struct DNode *prior,*next;
}DNode,*DLinkList;


//***************************circular double linked list******************************************
//data structure is same with uncircular double linked list


//***************************static linked list******************************************
//#define MaxSize 50
struct StaticLinkList[MaxSize]
{
	int data;
	int next;
};
#endif
