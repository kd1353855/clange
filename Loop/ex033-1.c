#include<stdio.h>
main()
{
	int i=0,sum=0,num=0;
	do {
	sum += num;
	i++;
	printf("”‚ÍH");
	scanf("%d", &num);
		
	} while (num != -999);
	printf("‡Œv=%d  •½‹Ï=%.2f\n", sum, (float)sum / (i-1));

	
}