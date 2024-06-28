#include<stdio.h>
main()
{
	int i=1, g=0;
	while (g!= 300)
	{
		g+=i;
		printf("%d+", i);
		i++;
	}
	printf("=%d", g);
}