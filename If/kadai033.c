#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット？");
	scanf("%c", &moji);
	if (moji >= 'a' && moji <= 'z')
	{
		printf("その文字は小文字です");
	}
	else
	{
		printf("その文字は大文字です");
	}
}