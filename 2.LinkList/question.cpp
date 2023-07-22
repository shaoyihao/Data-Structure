#include "linklist.h"

void insertNode2(Node *p, ElemType e)  // 在结点 p 的前面插入元素 e
{
    Node *q = new Node;
    q->data = e;
    q->next = p->next;
    p->next = q;            // 在 p 的后面插入元素 e

    swap(p->data, q->data); // 交换 2 个结点中的数据
}
void deleteNode2(Node *p)  // 删除结点 p
{
    Node *tmp = p->next;
    p->data = p->next->data; // 转为删除 p 的后继结点，不过在那之前先将后继结点的数据覆盖存入 p
    p->next = p->next->next;
    delete tmp;
}