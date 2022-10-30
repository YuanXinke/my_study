/***********************************************************
  > File Name: singly_link_list.c
  > Author: xk
  > Mail: -----------------
  > Created Time: 2022年07月24日 星期日 17时56分15秒
  > Modified Time:2022年07月24日 星期日 17时56分15秒
 *******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LNode {
    int data;
    struct LNode *next;
}LinkList;

void init_list(LinkList *L)
{
    L = (LinkList *)malloc(sizeof(LinkList));
    L->next = NULL;
    L->data = 0;
}

bool empty(LinkList *L)
{
    if (L->next == NULL) {
        return true;
    }
    else {
        return false;
    }
}

LinkList * tail_insert(LinkList *L)
{
    LinkList *s,*r;
    int x;
    r = L;
    printf("请输入一个数!\n");
    scanf("%d",&x);
    while(x != 9999) {
        s = (LinkList *)malloc(sizeof(LinkList));
        s->data = x;
        r->next = s;
        r = s;
        printf("请输入一个数!\n");
        scanf("%d",&x);
    }
    r->next = NULL;

    return L;
}

int main()
{
    LinkList *L = NULL;
    /*初始化链表*/
    init_list(L);
    L->next = NULL;
    /*建立单链表*/
    tail_insert(L);
    /*将x插入到单链表L的第i个位置上*/
    ;
    /*在p结点前插入元素e*/
    ;
    /*按位序删除*/
    ;
    /*指定结点删除*/
    ;
    /*按位查找*/
    ;
    /*按值查找*/
    ;
    /*求表长的长度*/
    ;
    /*遍历操作*/
    ;

	return 0;
}

