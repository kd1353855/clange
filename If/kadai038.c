#include<stdio.h>
main()
{
	char moji;
	printf("1文字入力？");
	scanf("%c", &moji);
	if (moji >= 'a' && moji <= 'z') {
		printf("変換結果は%c", moji -32);
	}
	if (moji >= 'A' && moji <= 'Z') {
		printf("変換結果は%c", moji + 32);
	}
}