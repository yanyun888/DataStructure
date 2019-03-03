#include "Listack.h"
#include<stdio.h>
int main()
{
	Listack *s;
	InitStack(s);
	Push(s,2);
	Push(s,5);
	Push(s,6);
	Push(s,2);
	int e;
	Pop(s,e);
	Push(s,5);
	Push(s,6);
	printf("e = %d,length = %d\n",e,StackLength(s));
	DisplayStack(s);
	return 0;
}
