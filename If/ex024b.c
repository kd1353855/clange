//ex024b,c
//改造バージョン
#include<stdio.h>
main()
{
		char moji;
	printf("もじを入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
			printf("大文字です", moji);
	}
		else
	{
			printf("その他の文字です");
	}
	
	
		
}