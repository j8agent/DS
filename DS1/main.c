#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void TestSList() {
    int n;
    printf("����������ĳ���:");
    scanf("%d", &n);
    printf("\n����������ڵ������:");
    SLTNode* plist = NULL;
    for (int i = 0; i < n; ++i) {
        int val;
        scanf("%d", &val);
        SLTNode* newnode = BuySListNode(val);
        //      ͷ��
        newnode->next = plist;
        plist = newnode;
    }
    SLTBackPush(&plist, 1000);
    SLTBackPush(&plist, 10000);
    SLTPrint(plist);
}

int main() {
    TestSList();

}