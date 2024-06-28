#include<stdio.h>
main()
{
	int i = 1,g;
	g = i;
	printf("%d", i);
	do 
	{
		printf("+%d", i);
		i++;
		g += i;
	} while (g <= 300);
	printf("=%d\n", g);
}