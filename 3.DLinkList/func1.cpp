#include "dlinklist.h"

void InitList(DLinkList &head)
{
    head = new Node;
    head->prior = head->next = NULL;  // 
}

void printList(DLinkList head)
{
    Node *p = head->next;
    while (p)
    {
        cout << p->data << ' ';
        p = p->next;
    }

    // 逆序输出链表数据
    // if (p) while (p->next) p = p->next;  
    // while (p != head) 
    // {
    //     cout << p->data << ' ';
    //     p = p->prior;
    // }
    cout << endl;
}