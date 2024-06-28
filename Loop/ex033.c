#include<stdio.h>
main()
{
	int i,sum,num ;
	printf("”‚ÍH");
	scanf("%d", &num);

	for (i=0, sum=0; num!= -999; i++) 
	{
		sum += num;
		printf("”‚ÍH");
		scanf("%d", &num);
	}
	printf("‡Œv=%d  •½‹Ï=%.2f\n", sum,(float)sum / i);
}