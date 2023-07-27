#include "myheader.h"
typedef int ElemType;

struct Node
{
    ElemType data;
    struct Node *next;
};
typedef Node* LinkList;


/* ------- 简单操作，具体实现见 func1.cpp ------- */
void InitList(LinkList &L);
void DestroyList(LinkList &L);
void ClearList(LinkList L);
bool IsEmpty(LinkList L);
int ListLength(LinkList L);
void printList(LinkList L);

/* ------- 较复杂操作，具体实现见 func2.cpp ------- */
ElemType GetElem(LinkList L, int idx);
Node* GetElem2(LinkList L, int idx);
int ElemPosition(LinkList L, ElemType e);
Node* LocateElem(LinkList L, ElemType e);
void InsertNode(LinkList L, int idx, ElemType e);  //将元素e插入到第idx个位置（在第idx个结点前插入一个结点）
void DeleteNode(LinkList L, int idx, ElemType *e = NULL);

void CreateList(LinkList &L, int n);   // 头插法创建含有 n 个元素的链表
void CreateList_R(LinkList &L, int n); // 尾插法创建含有 n 个元素的链表
