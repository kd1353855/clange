#include<stdio.h>
main()
{
	int i, j;
	printf("�����i-999�j�ŏI��");
	scanf("%d", &i);
	while (i != -999)
	{
		printf("�W�i��=%o �P�U�i��=%X\n", i,i);
		printf("�����i-999�j�ŏI��");
		scanf("%d", &i);
	}
	
}