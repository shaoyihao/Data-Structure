#include "seqlist.h"

void InsertElem(SeqList &L, int idx, ElemType e)
{
    for (int j = L._length - 1; j >= idx - 1; j --)
        L._data[j + 1] = L._data[j];
    L._data[idx - 1] = e;

    L._length ++;
}
void DeleteElem(SeqList &L, int idx, int *e)
{
    *e = L._data[idx - 1];
    for (int i = idx; i <= L._length - 1; i ++)
        L._data[i - 1] = L._data[i];

    L._length --;
}
int LocateElem(SeqList L, ElemType e)
{
    for (int i = 0; i < L._length; i ++)
        if (L._data[i] == e) return i + 1;  // 返回这是线性表中的第几个元素
    
    return 0;  // 表中不存在该元素
}