#include<stdio.h>
main()
{
	int i,sum,num ;
	printf("���́H");
	scanf("%d", &num);

	for (i=0, sum=0; num!= -999; i++) 
	{
		sum += num;
		printf("���́H");
		scanf("%d", &num);
	}
	printf("���v=%d  ����=%.2f\n", sum,(float)sum / i);
}