#include<stdio.h>
main()
{
	int num;
	printf("数は？");
	scanf("%d", &num);
	do 
	{
		printf("*****\n");
		num--;// num-=1; or num=num-1;でもいい
	} while (num > 0);
}