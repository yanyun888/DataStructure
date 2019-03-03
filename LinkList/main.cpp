#include"LinkList.h"

int main()
{
	LinkList *L;
	int a[] = {3,4,3,2,3};
	CreateListR(L,a,5);
	DisplayList(L);
	int e;
	DeleteList(L,2,e);
	DisplayList(L);
	InsertList(L,4,34);
	DisplayList(L);
			
	return 0;
}
