#include<stdio.h>
main()
{
		char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (moji >= 0x41) {
		if (moji <= 0x5a) {
			printf("�啶���ł�", moji);
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
	else {
		printf("���̑��̕����ł�");
	}
		
}