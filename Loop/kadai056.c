#include<stdio.h>
main()
{
	char i,j;
	printf("アルファベット入力？");
	scanf("%c", &i);
	for(j=i;j<='z';j++)
	{
		printf(" %c", j);
	}
}