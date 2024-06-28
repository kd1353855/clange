#include<stdio.h>
main()
{
	int i = 1;
	while (i <= 20)
	{
		printf("%d ", i);
		i++;
		if (i == 10) {
			printf("\n");
		}
	}
}