#include<stdio.h>
main()
{
	float i, j;
	printf("2�̎����l");
	scanf("%f%f",&i,&j);
	printf("***%f��%f�̎l�����Z***\n",i,j);
	printf("�a=%.6f ��=%.6f ��=%.6f ��=%.6f", i + j, i - j, i * j, i / j);
}