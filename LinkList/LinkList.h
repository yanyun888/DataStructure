#ifndef _LINKLIST_H_
#define _LINKLIST_H_

typedef int ElemType;

typedef struct LNode
{
	ElemType data;
	LNode  *next;
}LinkList;

void CreateListR(LinkList *&L,int a[],int n); // 尾插法
void CreateListF(LinkList *&L,int a[],int n); // 头插法
bool ListEmpty(LinkList *L);
int ListLength(LinkList *L);
void DisplayList(LinkList *L);
void InitList(LinkList *&L);
void DestroyList(LinkList *&L);
int LocateElem(LinkList *L,ElemType e);
bool GetElem(LinkList *L,int i,ElemType& e);
bool InsertList(LinkList *&L,int i,ElemType e);
bool DeleteList(LinkList *&L,int i,ElemType &e);
#endif // _LINKLIST_H_
