#include<iostream>
#include<algorithm>
#include<cstdio> 
#include<cstring>
using namespace std;

#define MaxSize 20

typedef struct{
	int data[MaxSize];
	int length;
}SeqList;

void InitList(SeqList &L)
{
	for(int i=0;i<MaxSize;++i)
	{
		L.data[i]=0;
	 } 
	L.length=0;
} 

bool ListInsert(SeqList &L,int i,int e){  //顺序表L，第i个位置插入e 
	if(i<1||i>L.length+1)
	return false;
	if(L.length>=MaxSize)
	return false;
	for(int j=L.length;j>=i;--j)
	{
		L.data[j]=L.data[j-1];
	}
	L.data[i] = e;
	L.length++;
	return true;
}

bool ListDelete(SeqList &L,int i,int &e)  //删除第i个位置的元素 
{
	if(i<1||i>L.length)
	return false;
	e = L.data[i-1];
	for(int j=i;j<L.length;++j)
	{
		L.data[j-1] = L.data[j];
	}
	L.length--;
	return true;
 } 

int main(void)
{
	SeqList L;
	InitList(L);
	ListInsert(L,2,7);
	return 0;
}
