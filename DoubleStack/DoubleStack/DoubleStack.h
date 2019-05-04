#ifndef _DOUBLESTACK_H_
#define _DOUBLESTACK_H_

#include <stdio.h>
#include <windows.h>
#define MAX 100

typedef struct{
	int data[MAX];
	int top1;
	int top2;
}Doublestack;

void Init(Doublestack *s);
int Push(Doublestack *s, int elem, int stacklocation);
int Delet(Doublestack *s,int elem ,int stacklocation);

#endif