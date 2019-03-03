#ifndef __SQLIST_H__
#define __SQLIST_H__

#define MaxSize 100 

typedef int ElemType;

typedef struct
{
	ElemType data[MaxSize];
	int length;	
} SqList;

void CreateList(SqList *&L,ElemType a[],int n);
void InitList(SqList *&L);
bool ListEmpty(SqList *L);
int ListLength(SqList *L);
void DisplayList(SqList *L);
void DistroyList(SqList *&L);
bool InsertList(SqList *&L,int i,ElemType e);
bool DeleteList(SqList *&L,int i, ElemType &e);
bool GetElem(SqList *L, int i, ElemType &e);
int LocateElem(SqList *L,ElemType e);

#endif // __SQLIST_H__
