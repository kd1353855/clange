#include<stdio.h>
main()
{
	int i, j;
	printf("2�̐���");
	scanf("%d%d",&i,&j);
	printf("***%d��%d�̎l�����Z***\n",i,j);
	printf("%d+%d=%d\n", i, j, i + j);
	printf("%d-%d=%d\n", i, j, i - j);
	printf("%d*%d=%d\n", i, j, i * j);
	printf("%d/%d=%d���܂�%d\n", i, j, i / j,i%j);
}