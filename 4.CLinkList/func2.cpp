#include "clinklist.h"

ElemType GetElem(CLinkList rear, int idx)
{
    Node *head = rear->next;
    Node *p = head->next;   // 指向首元结点

    int count = 1;
    while (p != head && count < idx)
    {
        p = p->next;
        count ++;
    }

    if (p == head) return ERROR;
    else return p->data;
}

void InsertNode(CLinkList rear, ElemType e, int idx)
{
    Node *newNode = new Node;
    newNode->data = e;

    Node *head = rear->next;
    Node *p = head;
    int count = 0;
    while (p != head && count < idx - 1)
    {
        p = p->next;
        count ++;
    }

    if (p == head) return;
    else   // 此时 p 指向第 idx-1 个元素，下面进行插入操作
    {
        newNode->next = p->next;
        p->next = newNode;
    }

    if (rear->next != head) rear = rear->next;
}

void DeleteNode(CLinkList rear, int idx, ElemType *e)
{
    Node *head = rear->next;
    Node *p = head;

    int count = 0;
    while (p != head && count < idx - 1)
    {
        p = p->next;
        count ++;
    }

    if (p == head) return;
    
    // 此时 p 指向的是第 idx-1 个元素
    Node *tmp = p->next;
    if (tmp->next == head) rear = p;
//  *e = tmp->data;
    p->next = p->next->next;
    delete tmp;
}