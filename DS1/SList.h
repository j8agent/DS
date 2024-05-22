#pragma once
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1


#ifndef DS_3_21_SLIST_H
#define DS_3_21_SLIST_H
typedef int SLTDataType;
typedef struct SListNode {
    SLTDataType data;
    struct SListNode* next;
}SLTNode;
void SLTBackPush(SLTNode** phead, SLTDataType x);
SLTNode* BuySListNode(SLTDataType x);
SLTDataType SLTFind(SLTNode* phead, int pos);
void SLTPrint(SLTNode* phead);
#endif //DS_3_21_SLIST_H
