#include<stdio.h>
main()
{
		char moji;
	printf("‚à‚¶‚ð“ü—Í:");
	scanf("%c", &moji);
	if (moji >= 0x41) {
		if (moji <= 0x5a) {
			printf("‘å•¶Žš‚Å‚·", moji);
		}
		else {
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
		}
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
		
}