#include<stdio.h>
main()
{
	char i, j;
	printf("アルファベット入力？");
	scanf("%c", &i);
	i = i - 31;
	for (j = i; j <= 'Z'; j++)
	{
		printf("%c ", j);
	}
}