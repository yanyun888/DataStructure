#include<stdio.h>
#include<malloc.h>
#include"SqStack.h"

void InitStack(SqStack *&s)
{
	s = (SqStack*) malloc(sizeof(SqStack));
	s->top = -1;
}

void DisplayStack(SqStack *s)
{
	for(int i=s->top;i>=0;i--)
		printf("%d ",s->data[i]);
	printf("\n");
}

void DestroyStack(SqStack *&s)
{
	free(s);
}

int StackLength(SqStack *s)
{
	return s->top + 1;
}

bool StackEmpty(SqStack *s)
{
	return s->top == -1;
}

bool GetTop(SqStack *s,ElemType &e)
{
	if(s->top == -1)
		return false;
	e = s->data[s->top];
	return true;
}

bool Push(SqStack *&s,ElemType e)
{
	if(s->top + 1 == MaxSize)
		return false;
	s->data[s->top+1] = e;
	s->top++;
	return true;
}

bool Pop(SqStack *&s,ElemType &e)
{
	if(s->top == -1)
		return false;
	s->top--;
	e = s->data[s->top];
	return true;
}
