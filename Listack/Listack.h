#ifndef _LISTACK_H_
#define _LISTACK_H_

typedef int ElemType;

typedef struct LNode
{
	ElemType data;
	LNode *next;
}Listack;

void InitStack(Listack *&s);
void DisplayStack(Listack *s);
int StackLength(Listack *s);
bool StackEmpty(Listack *s);
void DestroyStack(Listack *&s);
bool GetTop(Listack *s,ElemType &e);
bool Push(Listack *&s,ElemType e);
bool Pop(Listack *&s,ElemType &e);


#endif // _LISTACK_H_
