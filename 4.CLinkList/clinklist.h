#include "myheader.h"

typedef int ElemType;

struct Node
{
    ElemType data;
    struct Node *next;
};
typedef Node* CLinkList;

/* ------- 简单操作，具体实现见 func1.cpp ------- */
void InitList(CLinkList &L);
void DestroyList(CLinkList &L);
void ClearList(CLinkList &L);
bool IsEmpty(CLinkList L);
int ListLength(CLinkList L);

/* ------- 复杂操作，具体实现见 func2.cpp ------- */
ElemType GetElem(CLinkList L, int idx);
void InsertNode(CLinkList L, ElemType e, int idx);
void DeleteNode(CLinkList L, int idx, ElemType *e = NULL);