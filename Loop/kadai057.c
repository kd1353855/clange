#include<stdio.h>
main()
{
	char i, j;
	printf("�A���t�@�x�b�g���́H");
	scanf("%c", &i);
	i = i - 31;
	for (j = i; j <= 'Z'; j++)
	{
		printf("%c ", j);
	}
}