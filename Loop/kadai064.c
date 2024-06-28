#include<stdio.h>
main()
{
	int i = 20;
	while (i >= 1)
	{
		printf("%d ", i);
		i--;
		if (i == 10) {
			printf("\n");
		}
	}
}