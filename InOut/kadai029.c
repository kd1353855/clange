#include<stdio.h>
main()
{
	float h,en,ch;
	en = 3.1415;
	printf("���a�H");
	scanf("%f", &h);
	ch = h * 2;
	printf("���a��%.6f\n",ch);
	printf("�~����%.6f\n",ch *en);
	printf("�ʐ�=%.6f", (h*h) * en);
}