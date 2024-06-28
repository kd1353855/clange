#include<stdio.h>
main()
{
	int i, j ,gokei;
	gokei = 0;
	i = 0;
	j = 1;
	while (gokei != 300) {
		printf("%d+%d", i,j );
		i++;
		j++;
		gokei = i+j;
	}
	printf("=%d", gokei);
}