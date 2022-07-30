/***********************************************************
  > File Name: sequence_list.c
  > Author: xk
  > Mail: -----------------
  > Created Time: 2022年07月24日 星期日 17时11分19秒
  > Modified Time:2022年07月24日 星期日 17时11分19秒
 *******************************************************/
#include <stdio.h>

#define MaxSize 10    //定义最大长度
typedef struct{
	int data[MaxSize]; //静态的数组存数据，存int数据
	int length;		   //顺序表的当前长度
}SqList;
typedef unsigned char bool;
enum {
	false = 0,
	true,
};

//初始化
void InitList(SqList *L) 
{
	for (int i=0; i<MaxSize; i++) {
		L->data[i] = 0;
	}
	L->length = 0;
}

//插入操作，在顺序表L的第1个(位序)上插入x
//时间复杂度:最好O(1) 最坏O(n) 平均情况:设插入概率p=1/n+1,则循环np+(n-1)p+...+1p=n/2,平均时间复杂度=O(n)
bool ListInsert(SqList *L, int i,int e)
{
	if (i<1 || i>L->length+1)
		return false;

	if (L->length >= MaxSize)
		return false;

	for (int j=L->length; j>=i; j--)
		L->data[j] = L->data[j-1];

	L->data[i-1] = e;
	L->length++;

	return true;
}

//删除操作，删除顺序表L中第i个元素并返回其元素值
//时间复杂度同输入
bool ListDelete(SqList *L, int i,int *e) 
{
	if (i<1||i>L->length+i)
		return false;

	*e = L->data[i-1];
	for (int j=i; j<L->length; j++)
		L->data[j]=L->data[j-1];
	L->length--;

	return true;
}

//按位查找，返回顺序表中第i个元素的元素值
int GetElem(SqList *L, int i) 
{
	return L->data[i-1];
}

//按值查找，返回顺序表L中第一个值为X的元素的位置
int LocateElem(SqList *L, int e)
{
	for (int i=0; i<L->length; i++) {
		if(L->data[i] == e)
			return i+1;
	}
	return -1;
}

int main()
{
	SqList P_list;
	InitList(&P_list);

	ListInsert(&P_list,1,12);
	ListInsert(&P_list,2,6);

	int i = GetElem(&P_list,2);
	printf("GetElem:%d\n",i);
	printf("GetElem:%d\n",P_list.data[0]);

	int j = LocateElem(&P_list,6);
	printf("LocateElem index:%d\n",j);


    return 0;
}

