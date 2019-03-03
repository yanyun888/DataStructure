#include <stdio.h>
#include<malloc.h>
#include"SqList.h"

void CreateList(SqList *&L,int a[],int n)
{
	L = (SqList *)malloc(sizeof(SqList));
	for(int i=0;i<n;i++)
	{
		L->data[i] = a[i];
	}
	L->length = n;
}

void InitList(SqList *&L)
{
	L = (SqList *)malloc(sizeof(SqList));
	L->length = 0;
}

void DestroyList(SqList *&L)
{
	free(L);
}

void DisplayList(SqList *L)
{
	for(int i=0;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}

	printf("\n");
}

int ListLength(SqList *L)
{
	return L->length;
}

bool ListEmpty(SqList *L)
{
	return L->length == 0;
}

bool InsertList(SqList *&L,int i,ElemType e)
{
	if(i <= 0 || i> L->length + 1)
		return false;
	i--;
	for(int j=L->length;j>i;j--)
		L->data[j] = L->data[j-1];
	L->data[i] = e;
	L->length++;
	return true;
}

bool DeleteList(SqList *&L,int i,ElemType &e)
{
	if(i < 1 || i > L->length )
		return false;
	i--;
	e = L->data[i];
	for(int j=i;j < L->length-1;j++)
		L->data[j] = L->data[j+1];
	L->length--;
	return true;
}

int LocateElem(SqList *L, ElemType e)
{
	for(int i=0;i<L->length;i++)
	{
		if(L->data[i] == e)
			return i + 1;
	}
	return -1;
}

bool GetElem(SqList *L, int i, ElemType &e)
{
	if(i < 1 || i > L->length)
		return false;
	i--;
	e = L->data[i];
	return true;
}
