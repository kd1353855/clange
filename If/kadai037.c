#include<stdio.h>
main()
{
	int i;
	printf("0����P�O�O�܂ł̐����H");
	scanf("%d", &i);
	if (i < 29) {
		printf("���̐��l�̔��茋�ʂ́u�P�v�ł�");
	}
	if (i >= 30 &&i<=49) {
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
	}
	if (i >= 50 && i <= 79) {
			printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
		}
	if (i >=80 && i <=89) {
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
	}
	if (i>90) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}


}