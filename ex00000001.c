#include<stdio.h>
void k(int a, int b, int* g, float* h);
main() {
	int a, b, g;
	float h;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	k(a,b,&g,&h);
	printf("合計は%d、平均は%.2fです", a,h);
}
void k(int a, int b, int* g, float* h) {
	*g = a + b;
	*h = (float)*g / 2;
}

