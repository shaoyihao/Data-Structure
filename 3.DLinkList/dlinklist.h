#include "myheader.h"
typedef int ElemType;

struct Node
{
    ElemType data;
    struct Node *next, *prior;
};
typedef Node* DLinkList;


/* ------- 简单操作，具体实现见 func1.cpp ------- */


/* ------- 较复杂操作，具体实现见 func2.cpp ------- */
void InsertNode(DLinkList L, int idx, ElemType e);
void DeleteNode(DLinkList L, int idx, ElemType *e=NULL);