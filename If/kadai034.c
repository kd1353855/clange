#include<stdio.h>
main()
{
	char moji;
	printf("�ꕶ������:");
	scanf("%c", &moji);
	if (moji >= 'a' && moji <= 'z') 
	{
		printf("�A���t�@�x�b�g�ł�");
	}
	else
	{
		if (moji >= 'A' && moji <= 'Z')
		{
			printf("�A���t�@�x�b�g�ł�");
		}
		else
		{
			printf("ERROR");
		}
	}
	
}