#define _CRT_SECURE_NO_WARNINGS 1
#include"DoubleStack.h"
int main(){
	Doublestack s;
	Init(&s);
	int data = 0;
	int stacklocation = 0;
	int elem = 0;
	printf("Plese input a elem and elect stacklocation 1 or 2\n");
	scanf("%d %d", &data,&stacklocation);
	if (stacklocation != 1 && stacklocation != 2){
		printf("Plese input a right stacklocation");
		scanf("%d", &stacklocation);
	}
	Push(&s, data, stacklocation);
	/*switch (stacklocation){
	case 1:
		  printf("%d", s.data[s.top1]);
		  break;
	case 2:
		printf("%d", s.data[s.top2]);
		break;
	}*/
	int result = Delet(&s, elem, stacklocation);
	printf("%d", result);
	system("pause");
	return 0;
}