#include<stdio.h>
main()
{
	int i,sum,num ;
	printf("数は？");
	scanf("%d", &num);

	for (i=0, sum=0; num!= -999; i++) 
	{
		sum += num;
		printf("数は？");
		scanf("%d", &num);
	}
	printf("合計=%d  平均=%.2f\n", sum,(float)sum / i);
}