#ifndef _SQSTACK_H_
#define _SQSTACK_H_

#define MaxSize 100

typedef int ElemType;


typedef struct
{
	ElemType data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack *&s);
int StackLength(SqStack *s);
bool StackEmpty(SqStack *s);
void DisplayStack(SqStack *s);
void DestroyStack(SqStack *&s);
bool GetTop(SqStack *s,ElemType &e);
bool Push(SqStack *&L,ElemType e);
bool Pop(SqStack *&L,ElemType &e);

#endif //_SQSTACK_H_
