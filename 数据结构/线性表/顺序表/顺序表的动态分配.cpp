#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

#define InitSize 10

typedef struct{
	int *data;//动态分配数组指针 
	int MaxSize;//顺序表最大容量 
	int length;//顺序表当前长度 
}SeqList; 

void InitList(SeqList &L)
{
	L.data = (int *) malloc(sizeof(int) * InitSize);
	L.length = 0;
	L.MaxSize = InitSize;
}

void IncreaseSize(SeqList &L,int len)
{
	int *q = L.data;
	L.data = (int *) malloc(sizeof(int) * (InitSize + len));
	for(int i = 0;i < L.length;++i)
	{
		L.data[i] = q[i];//将数据复制到新区域 
	}
	L.MaxSize = L.MaxSize + len;  //顺序表最大容量增加len 
	free(q);
 } 
 
int main(void)
{
	SeqList L;
	InitList(L);
	IncreaseSize(L,5);
	return 0;
 } 
