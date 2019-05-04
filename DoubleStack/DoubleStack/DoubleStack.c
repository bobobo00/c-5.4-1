#define _CRT_SECURE_NO_WARNINGS 1
#include "DoubleStack.h"
void Init(Doublestack *s){
	s->top1 = -1;
	s->top2 = MAX;
}
int Push(Doublestack *s, int elem, int stacklocation)
{
	if (s->top2 - s->top1 == 1){
		printf("EORRO!");
		return 0;
	}
	if (stacklocation == 1){
		s->top1++;
		s->data[s->top1] = elem;
		return 1;
	}
	if (stacklocation == 2){
		s->top2--;
		s->data[s->top2] = elem;
		return 1;
	}
	return 0;
}

int Delet(Doublestack *s, int elem, int stacklocation){
	if (s->top1 == -1 && s->top2 == MAX){
		printf("EORRO");
		return 0;
	}
	if (stacklocation == 1){
	    elem = s->data[s->top1];
		s->top1--;
		return elem;
	}
	if (stacklocation == 2){
		elem = s->data[s->top2];
		s->top1++;
		return elem;
	}
	return 0;
}
