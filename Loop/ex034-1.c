#include<stdio.h>
main()
{
	int num;
	printf("”‚ÍH");
	scanf("%d", &num);
	do 
	{
		printf("*****\n");
		num--;// num-=1; or num=num-1;‚Å‚à‚¢‚¢
	} while (num > 0);
}