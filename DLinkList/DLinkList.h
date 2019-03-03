#ifndef _DLINKLIST_H_
#define _DLINKLIST_H_

typedef int ElemType;

typedef struct DLNode
{
	ElemType data;
	DLNode *next;
	DLNode *prior;
}DLinkList;

void CreateListR(DLinkList *&L,int a[],int n);
void CreateListF(DLinkList *&L,int a[],int n);
bool ListEmpty(DLinkList *L);
int ListLength(DLinkList *L);
void DestroyList(DLinkList *&L);
void DisplayList(DLinkList *L);
void InitList(DLinkList *&L);
bool GetElem(DLinkList *L,int i,ElemType &e);
int LocateElem(DLinkList *L,ElemType e);
bool InsertList(DLinkList *&L, int i,ElemType e);
bool DeleteList(DLinkList *&L,int i, ElemType &e);

#endif //_DLINKLIST_H_
