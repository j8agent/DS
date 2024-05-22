//
// Created by 20359 on 2024/3/21.
//
#include "SList.h"
void SLTPrint(SLTNode* phead) {
    while (phead) {
        printf("%d->", phead->data);
        phead = phead->next;
    }
    printf("NULL\n");
}
//�����ڵ�
SLTNode* BuySListNode(SLTDataType x) {
    SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
    if (newnode == NULL) {
        perror("malloc fail");
        exit(-1);
    }
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}
//void SLTBackPush(SLTNode*phead,SLTDataType x)
//{
//    SLTNode *pback = phead;
//    while (phead){
//        pback = phead;
//        phead = phead->next;
//    }
//    SLTNode *newnode = BuySListNode(x);
//    pback->next = newnode;
//    newnode->data = x;
//}
void SLTBackPush(SLTNode** pphead, SLTDataType x) {
    SLTNode* newnode = BuySListNode(x);
    if (*pphead == NULL) {
        *pphead = newnode;
    }
    else {
        SLTNode* tail = *pphead;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newnode;
    }
}

//��
SLTDataType SLTFind(SLTNode* phead, int pos)
{
    for (int i = 1; i < pos; ++i) {
        phead = phead->next;
    }
    return phead->data;
}
