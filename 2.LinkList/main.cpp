#include "linklist.h"

int main()
{
    LinkList L = NULL;
    
    CreateList(L, 5);
    printList(L);

    int t = GetElem(L, 3);
    cout << t << endl;

    InsertNode(L, 2, 10);
    printList(L);

    DeleteNode(L, 1);
    printList(L);

    return 0;
}