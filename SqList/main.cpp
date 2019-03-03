#include "SqList.h"
#include<stdio.h>

int main()
{
	int a[] = {4,5,6,2,1};
	SqList *L;
	CreateList(L,a,5);
	InsertList(L,2,5);
	int e;
	DeleteList(L,6,e);
	printf("e = %d\n",e);
	DisplayList(L);
	GetElem(L,5,e);
	printf("e = %d\n",e);
	LocateElem(L,e);
	return 0;
}
