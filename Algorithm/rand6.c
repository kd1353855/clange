#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int p, c;
	srand(time(0));
	rand();
	printf("�����o���܂����H\n(�P�F�O�[�Q�F�`���L�R�F�p�[)>");
	scanf("%d", &p);
	c = rand() % 3;
	switch (p)
	{
	case 1:
			printf("�v���C���[�̓O�[�ł�\n");
			break;
	case 2 :
			printf("�v���C���[�̓`���L�ł�\n");
			break;
	case 3:
			printf("�v���C���[�̓p�[�ł�\n");
			break;
	}
	switch (c)
	{
	case 0:
			printf("�R���s���[�^�̓O�[�ł�\n");
			break;
	case 1:
			printf("�R���s���[�^�̓`���L�ł�\n");
			break;
	case 2:
			printf("�R���s���[�^�̓p�[�ł�\n");
			break;
	}
	switch (((p - 1) - c + 3) % 3) {
	case 0:
			printf("\n�������ł��B\n");
			break;
	case 1:
				printf("\n�R���s���[�^�̏����ł��B\n");
				break;
	case 2:
					printf("\n�v���C���[�̏����ł��B\n");
					break;

	}




	
}
