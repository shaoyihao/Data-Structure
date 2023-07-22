#include "myheader.h"

#define DEFAULT_CAPACITY 100
typedef int ElemType;

struct SeqList
{
    int _length;        // 当前存储的元素个数
    int _capacity;      // 总容量                [动态内存分配]
    ElemType* _data;    // 存储区(基址)
};

/*------ 以下是简单函数，实现见 func1.cpp ------ */

void InitList(SeqList &L);
void ClearList(SeqList &L);
void DestroyList(SeqList &L);
void PrintList(SeqList L);

bool IfEmpty(SeqList L);
int ListLength(SeqList L);

ElemType GetElem(SeqList L, int idx);



/*------ 以下是较复杂函数，实现见 func2.cpp ------ */

// 将元素 e 插入到线性表的第 i 个位置
void InsertElem(SeqList &L, int idx, ElemType e);
void DeleteElem(SeqList &L, int idx, int *e=NULL);
int LocateElem(SeqList L, ElemType e);
