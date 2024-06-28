#include<stdio.h>
main()
{
	char moji;
	printf("一文字入力:");
	scanf("%c", &moji);
	if (moji >= 'a' && moji <= 'z') 
	{
		printf("アルファベットです");
	}
	else
	{
		if (moji >= 'A' && moji <= 'Z')
		{
			printf("アルファベットです");
		}
		else
		{
			printf("ERROR");
		}
	}
	
}