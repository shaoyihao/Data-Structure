#include "dlinklist.h"

int main()
{
    DLinkList L;
    InitList(L);

    CreateList_R(L, 5);
    printList(L);
    InsertNode(L, 3, 1000);
    printList(L);
    DeleteNode(L, 4);
    printList(L);
    return 0;
}