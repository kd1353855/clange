#include<stdio.h>
main() {
	int num = 10;
	int* p = &num;
	int** pp = &p;
	printf("%p\n", *pp);
	printf("%d", **pp);
}