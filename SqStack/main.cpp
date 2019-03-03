#include"SqStack.h"

int main()
{
	SqStack *s;
	InitStack(s);
	Push(s,2);
	Push(s,4);
	Push(s,2);
	Push(s,4);
	Push(s,2);
	Push(s,4);
	int e;
	Pop(s,e);
	DisplayStack(s);
	return 0;
}
