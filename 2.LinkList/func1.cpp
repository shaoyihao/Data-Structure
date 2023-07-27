#include "linklist.h"

void InitList(LinkList &head)  // 对指针变量head自身进行操作
{
    head = new Node;   // 头结点
    head->next = NULL;
}
void DestroyList(LinkList &head)
{
    Node *p = head;
    Node *ne = head->next;
    while (p)
    {
        delete p;
        p = ne;
        ne = ne->next;
    }
    head = NULL;
}
void ClearList(LinkList head)
{
    Node *p = head->next;  // 指向首元结点
    Node *ne = p->next;
    while (p)
    {
        delete p;
        p = ne;
        ne = ne->next;
    }
    head->next = NULL; // ！
}
bool IsEmpty(LinkList head)
{
    return (head->next == NULL);
}
int ListLength(LinkList head)
{
	int count = 0;
	Node *p = head->next;   //不包含头结点 
	while (p) 
	{
		count ++;
		p = p->next;
	}
	return count;
}
void printList(LinkList head)
{
    Node *p = head->next;
    while (p)
    {
        cout << p->data << ' ';
        p = p->next;
    }
    puts("");
}
