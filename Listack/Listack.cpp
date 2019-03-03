#include"Listack.h"
#include<stdio.h>
#include<malloc.h>

void InitStack(Listack *&s)
{
	s = (Listack*)malloc(sizeof(Listack));
	s->next = NULL;
}

void DisplayStack(Listack *s)
{
	Listack *p = s->next;
	while(p != NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	printf("\n");
}

int StackLength(Listack *s)
{
	int cnt = 0;
	Listack *p = s;
	while(p->next != NULL)
	{
		cnt++;
		p = p->next;	
	}
	return cnt;
}

void DestroyStack(Listack *&s)
{
	Listack *pre =s ,*p = s->next;
	while(p != NULL)
	{
		free(pre);
		pre = p;
		p = p->next;
	}
	free(pre);
}

bool Push(Listack *&s,ElemType e)
{
	Listack *p = (Listack*)malloc(sizeof(Listack));
	p->data = e;
	p->next = s->next;
	s->next = p;
}

bool Pop(Listack *&s,ElemType &e)
{
	if(s->next == NULL)
		return false;
	Listack *q = s->next;
	e = q->data;
	s->next = s->next->next;
	free(q);
	return true;
}

bool GetTop(Listack *s,ElemType &e)
{
	if(s->next == NULL)
		return false;
	e = s->next->data;
	return true;
}
