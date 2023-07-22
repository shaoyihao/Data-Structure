#include "seqlist.h"

/* 王道 P17 题1 */
void test1(SeqList &L, ElemType &e)
{
    if (IfEmpty(L)) 
    {
        cout << "EMPTY" << endl;
        return;
    }

    int m = 0;
    for (int i = 1; i <= L._length - 1; i ++)
        if (L._data[i] < L._data[m]) m = i;
    e = L._data[m];
    L._data[m] = L._data[L._length - 1];
    L._length --;
}