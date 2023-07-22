#include "seqlist.h"

void InitList(SeqList &L)
{
    L._data = new ElemType[DEFAULT_CAPACITY];
    L._length = 0;
    L._capacity = DEFAULT_CAPACITY;
}
void ClearList(SeqList &L)
{
    L._length = 0;
}
void DestroyList(SeqList &L)
{
    if (L._data != NULL) delete L._data;
}
void PrintList(SeqList L)
{
    for (int i = 0; i < L._length; i ++)
        cout << L._data[i] << ' ';
    puts("");
}

bool IfEmpty(SeqList L)
{
    return (L._length == 0);
}
int ListLength(SeqList L)
{
    return L._length;
}

ElemType GetElem(SeqList L, int idx)  // 获取顺序表中第 i 个元素，即数组下标为 i-1 的元素
{
    return L._data[idx - 1];
}