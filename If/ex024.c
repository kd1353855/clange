#include<stdio.h>
main()
{
		char moji;
	printf("もじを入力:");
	scanf("%c", &moji);
	if (moji >= 0x41) {
		if (moji <= 0x5a) {
			printf("大文字です", moji);
		}
		else {
			printf("その他の文字です");
		}
	}
	else {
		printf("その他の文字です");
	}
		
}