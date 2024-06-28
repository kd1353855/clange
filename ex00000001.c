#include<stdio.h>
void k(int a, int b, int* g, float* h);
main() {
	int a, b, g;
	float h;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	k(a,b,&g,&h);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f‚Å‚·", a,h);
}
void k(int a, int b, int* g, float* h) {
	*g = a + b;
	*h = (float)*g / 2;
}

