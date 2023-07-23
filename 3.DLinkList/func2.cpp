#include "dlinklist.h"

void InsertNode(DLinkList head, int idx, ElemType e)
{
    Node *newNode = new Node;
    newNode->data = e;

    Node *p = head;
    int count = 0;
    while (p && count < idx - 1)
    {
        p = p->next;
        count ++;
    }

    if (p == NULL) return;
    else   // 此时 p 指向第 idx-1 个元素
    {
        newNode->next = p->next;
        newNode->prior = p;
        p->next->prior = newNode;
        p->next = newNode;
    }
}

void DeleteNode(DLinkList head, int idx, ElemType *e)
{
    Node *p = head;
    int count = 0;
    while (p && count < idx - 1)
    {
        p = p->next;
        count ++;
    }

    if (p == NULL) return;
    else
    {
        Node *tmp = p->next;
    //  *e = tmp->data;
        p->next = tmp->next;
        tmp->next->prior = p;
        delete tmp;
    }
}