#include "linklist.h"

ElemType GetElem(LinkList head, int idx)
{
    Node *p = head->next;

    int count = 1;
    while (p && count < idx)
    {
        p = p->next;
        count ++;
    }

    if (p == NULL) return ERROR; // 说明 idx 超出了表长
    else return p->data;
}

int ElemPosition(LinkList head, ElemType e)
{
    Node *p = head->next;
    int count = 1;
    while (p && p->data != e)
    {
        p = p->next;
        count ++;
    }
    if (p == NULL) return 0;
    else return count;
}

Node* LocateElem(LinkList head, ElemType e)
{
    Node *p = head->next;
    while (p && p->data != e) p = p->next;
    return p;  // p指向的要么是NULL，要么是所要找的元素
}

void InsertNode(LinkList head, int idx, ElemType e)
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
    else   //此时 p 指向第 idx-1 个元素
    {
        newNode->next = p->next;
        p->next = newNode;
    }
}

void DeleteNode(LinkList head, int idx, ElemType *e)
{
    Node *p = head;
    int count = 0;
    while (p && count < idx - 1)
    {
        p = p->next;
        count ++;
    }

    if (p == NULL) return;
    else  // 此时 p 指向的是第 idx-1 个元素
    {
        Node *tmp = p->next;
    //  *e = tmp->data;
        p->next = p->next->next;
        delete tmp;
    }
}

void CreateList(LinkList &head, int n)
{
    head = new Node;
    head->next = NULL;

    while (n --)
    {
        Node *p = new Node;
    //  cin >> p->data;
        p->next = head->next;
        head->next = p;
    }
}
void CreateList_R(LinkList &head, int n)
{
    head = new Node;
    head->next = NULL;

    Node *tail = head;
    while (n --)
    {
        Node *p = new Node;
        p->next = NULL;
    //  cin >> p->data;
        tail->next = p;
        tail = p;
    }
}