#include "clinklist.h"

void InitList(CLinkList &rear)
{
    rear = new Node;
    rear->next = rear;
}
void DestroyList(CLinkList &rear)
{
    Node *head = rear->next;
    Node *p = head;
    while (p != rear)
    {
        Node *tmp = p->next;
        delete p;
        p = tmp;
    }
    delete rear;
    rear = NULL;
}
void ClearList(CLinkList &rear)
{
    Node *head = rear->next;
    Node *p = head->next;  // 指向首元结点
    while (p != head)
    {
        Node *tmp = p->next;
        delete p;
        p = tmp;
    }
    rear = head;
    rear->next = rear;
}

bool IsEmpty(CLinkList L)
{
    return (L->next == NULL);  // 若仅存在一个头结点，就说明表为空。
}

int ListLength(CLinkList rear)
{
    int count = 0;
    Node *p = rear->next; // 指向头结点
    while (p != rear)
    {
        count ++;
        p = p->next;
    }
    
    return count;
}