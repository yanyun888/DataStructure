#include<stdio.h>
#include<malloc.h>
#include "DLinkList.h"

void CreateListF(DLinkList *&L,int a[],int n)
{
	DLinkList *s;
	L = (DLinkList *)malloc(sizeof(DLinkList));
	L->next = L->prior = NULL;
	DLinkList *p = L;
	for(int i=0;i<n;i++)
	{
		s = (DLinkList *)malloc(sizeof(DLinkList));
		s->data = a[i];
		s->next = p->next;
		if(p->next != NULL)
			p->next->prior = s;
		p->next = s;
		s->prior = p;
	}
}

void CreateListR(DLinkList *&L,int a[],int n)
{
	DLinkList *s;
	L = (DLinkList*) malloc(sizeof(DLinkList));
	L->next = L->prior = NULL;
	DLinkList *r = L;
	for(int i=0;i<n;i++)
	{
		s = (DLinkList*) malloc(sizeof(DLinkList));
		s->data = a[i];
		r->next = s;
		s->prior = r;
		r = s;
	}
}

void InitList(DLinkList *&L)
{
	L = (DLinkList*)malloc(sizeof(DLinkList));
	L->next = L->prior = NULL;
} 

void DistroyList(DLinkList *&L)
{
	DLinkList *pre = L,*p = L->next;
	while(p != NULL)
	{
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
}

void DisplayList(DLinkList *L)
{
	DLinkList *p = L->next;
	while(p != NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}	
	printf("\n");
}

int ListLength(DLinkList *L)
{
	int cnt = 0;
	DLinkList *p = L;
	while(p != NULL)
	{
		cnt++;
		p = p->next;
	}
	return cnt;
}

bool ListEmpty(DLinkList *L)
{
	return L->next == NULL;
}

bool GetElem(DLinkList *L,int i,ElemType &e)
{
	int j = 1;
	DLinkList *p = L->next;
	while(p != NULL && j < i)
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

int LocateElem(DLinkList *L,ElemType e)
{
	int i = 1;
	DLinkList *p = L->next;
	while(p != NULL && p->data != e)
	{
		i++;
		p = p->next;
	}
	if(p == NULL)
		return -1;
	else
	{
		return i;
	}
}

bool InsertList(DLinkList *&L,int i,ElemType e)
{
	int j = 0;
	DLinkList* p = L;
	while(j < i-1 && p != NULL)
	{
		j++;
		p = p->next;		
	}
	
	if(p == NULL)
		return false;
	else
	{
		DLinkList *s = (DLinkList *)malloc(sizeof(DLinkList));
		s->data = e;
		s->next = p->next;
		if(p->next != NULL)
			p->next->prior = s;
		s->prior = p;
		p->next = s;
		return true;
	}
}

bool DeleteList(DLinkList *&L,int i,ElemType &e)
{
	int j = 0;
	DLinkList *p = L,*q;
	while(j < i-1 && p != NULL)
	{
		j++;
		p = p->next;
	}	
	if( p == NULL)
		return false;
	else
	{
		q = p->next;
		if(q == NULL)
			return false;
		p->next = q->next;
		if(q->next != NULL)
			q->next->prior = p;
		free(q); 
		return true;
	}
}

