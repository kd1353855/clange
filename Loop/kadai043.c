#include<stdio.h>
main()
{
	int i=0;
	while (i != -1)
	{
		printf("文字コード（-1で終了）");
		scanf("%d", &i);
		printf("%c\n",(char)i);
	}
		
}