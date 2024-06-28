#include<stdio.h>
main() {
	int i, j;
	printf("®”?");
	scanf("%d", &i);
	for (j = 0; j < 11; j++)
	{
		i += j;
		printf("%d ", i);
	}
}