#include "seqlist.h" 

int main()
{
    SeqList L;
    InitList(L);

    for (int i = 1; i <= 10; i ++)
    {
        InsertElem(L, i, i);
        PrintList(L);
    }

    int e = 10;
    DeleteElem(L, 5, &e);
    PrintList(L);
    cout << e << endl;
    return 0;
}