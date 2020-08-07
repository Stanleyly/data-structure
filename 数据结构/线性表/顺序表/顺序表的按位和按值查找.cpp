#include<iostream>
#include<algorithm>
#include<cstdio> 
#include<cstring>
using namespace std;

#define MaxSize 10

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

int GetElem(SeqList &L, int i)//L中第i位元素值 
{
	return L.data[i-1];
}

int LocateElem(SeqList &L,int e)//L中值为e的位置在那 
{
	for(int i=0;i<L.length;++i)
	{
		if(e == L.data[i])
		return i+1;
	}
	return 0;
}


int main(void)
{
	SeqList L;
	InitList(L);
	GetElem(L,2);
	LocateElem(L,3);
	return 0;
}

