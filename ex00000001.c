#include<stdio.h>
void k(int a, int b, int* g, float* h);
main() {
	int a, b, g;
	float h;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	k(a,b,&g,&h);
	printf("���v��%d�A���ς�%.2f�ł�", a,h);
}
void k(int a, int b, int* g, float* h) {
	*g = a + b;
	*h = (float)*g / 2;
}

