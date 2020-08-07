#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

#define InitSize 10

typedef struct{
	int *data;//��̬��������ָ�� 
	int MaxSize;//˳���������� 
	int length;//˳���ǰ���� 
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
		L.data[i] = q[i];//�����ݸ��Ƶ������� 
	}
	L.MaxSize = L.MaxSize + len;  //˳��������������len 
	free(q);
 } 
 
int main(void)
{
	SeqList L;
	InitList(L);
	IncreaseSize(L,5);
	return 0;
 } 
