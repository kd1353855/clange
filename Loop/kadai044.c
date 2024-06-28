#include<stdio.h>
main()
{
	int i, j;
	printf("整数（-999）で終了");
	scanf("%d", &i);
	while (i != -999)
	{
		printf("８進数=%o １６進数=%X\n", i,i);
		printf("整数（-999）で終了");
		scanf("%d", &i);
	}
	
}