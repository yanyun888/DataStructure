#include<stdio.h>
#include<malloc.h>
#include"LinkList.h"

void CreateListF(LinkList *&L,int a[],int n)
{
	LinkList *s;
	L = (LinkList*) malloc(sizeof(LinkList));
	L->next = NULL;
	for(int i=0; i < n; i++)
	{
		s = (LinkList*)malloc(sizeof(LinkList));
		s->data = a[i];
		s->next = L->next;
		L->next = s;
	}
}

void CreateListR(LinkList *&L,int a[],int n)
{
	LinkList *s,*r;
	L = (LinkList*)malloc(sizeof(LinkList));
	L->next = NULL;
	r = L;
	for(int i=0;i<n;i++)
	{
		s = (LinkList*)malloc(sizeof(LinkList));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}

void InitList(LinkList *&L)
{
	L = (LinkList*)malloc(sizeof(LinkList));
	L->next = NULL;
}

void DisplayList(LinkList *L)
{
	LinkList *p = L->next;
	while(p !=NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	printf("\n");
}

int ListLength(LinkList *L)
{
	int cnt = 0;
	if(L->next != NULL)
	{
		cnt++;
	}
	return cnt;
}


bool ListEmpty(LinkList *L)
{
	return L->next == NULL;
}

void DistroyList(LinkList *&L)
{
	LinkList *pre = L;
	LinkList *p = L->next;
	if(p != NULL)
	{
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
}

bool GetElem(LinkList *L,int i,ElemType &e)
{
	LinkList *p = L;
	int j = 0;
	while(j < i && p != NULL)
	{
		j++;
		p = p->next;
	}
	if(p == NULL)
		return false;
	else
	{
		e = p->data;
		return true;
	}
}

int LocateElem(LinkList *L,ElemType e)
{
	int j =1;
	LinkList *p = L->next;
	while(p != NULL && p->data != e)
	{
		j++;
		p = p->next;
	}
	if(p == NULL)
		return -1;
	else
	{
		return j;
	}
}

bool InsertList(LinkList *&L, int i, ElemType e)
{
	int j = 0;
	LinkList *p = L,*s;
	while(p != NULL && j < i-1)
	{
		j++;
		p = p->next;
	}

	if(p == NULL)
		return false;
	else
	{
		s = (LinkList*)malloc(sizeof(LinkList));
		s->data = e;
		s->next = p->next;
		p->next = s;
		return true;
	}
}

bool DeleteList(LinkList *&L,int i,ElemType &e)
{
	int j = 0;
	LinkList *p = L,*q;
	while(p != NULL && j < i-1)
	{
		j++;
		p = p->next;
	}
	
	if(p == NULL)
		return false;
	else
	{
		q = p->next;
		p->next = q->next;
		free(q);
		return true;
	}
}
