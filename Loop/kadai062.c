#include<stdio.h>
main()
{
	int i = 20;
	do 
	{
		printf("%d ", i);
		i--;
		if (i == 10) {
			printf("\n");
		}
	} while (i >= 1);

}