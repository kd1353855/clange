#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int playerHP[2] = { 100,100 };
	int playerCom[2] = {};

	srand(time(0));
	rand();

	while (1)
	{
		//printf("�v���C���[�P�̗̑� : %d\n\n", playerHP[0]);
		printf("�v���C���[�P�̃^�[���I(1:�ʏ�U�� 2:���U�� 3:��4:��S�̈ꌂ)��");
		scanf("%d", &playerCom[0]);

		switch (playerCom[0])
		{
		case 1:
			printf("\n�ʏ�U���I\n\n");
			playerHP[1] -= rand() % 30 + 1;//�G�ւ̃_���[�W
			break;
		case 2:
			printf("\n���U���I�I\n\n");
			playerHP[1] -= rand() % 21 + 40;//�G�ւ̃_���[�W
			playerHP[0] -= rand() % 50;     //�����_���[�W
			break;
		case 3:
			printf("\n��\n\n");
			playerHP[0] += rand() % 40 + 1;//��
		case 4:
			int k;
			k = rand() % 101;
			if (k < 31) {
				printf("��������̂��������I\n");
				playerHP[1] -= rand() % 1000;//�G�ւ̃_���[�W
			}
			else {
				printf("������Ȃ�����\n");
			}
		}

		if (playerHP[1] <= 0)
		{
			printf("�v���C���[�Q��|����");
			break;
		}
		if (playerHP[0] <= 0)
		{
			printf("���ł���");
			break;
		}

		printf("�v���C���[�P�̗̑� : %d\n", playerHP[0]);
		printf("�v���C���[�Q�̗̑� : %d\n\n", playerHP[1]);

		printf("==============================================\n\n");
		//======================================================
//printf("�v���C���[�Q�̗̑� : %d\n\n", playerHP[1]);
		printf("�v���C���[�Q�̃^�[���I(1:�ʏ�U�� 2:���U�� 3:��4:��S�̈ꌂ)��");
		scanf("%d", &playerCom[1]);

		switch (playerCom[1])
		{
		case 1:
			printf("\n�ʏ�U���I\n\n");
			playerHP[0] -= rand() % 30 + 1;//�G�ւ̃_���[�W
			break;
		case 2:
			printf("\n���U���I�I\n\n");
			playerHP[0] -= rand() % 21 + 40;//�G�ւ̃_���[�W
			playerHP[1] -= rand() % 30;     //�����_���[�W
			break;
		case 3:
			printf("\n��\n\n");
			playerHP[1] += rand() % 40 + 1;//��
	     case 4:
			 int k;
			 k = rand() % 101;
			 if (k < 31) {
				 printf("��������̂��������I\n");
				 playerHP[0] -= rand() % 1000;//�G�ւ̃_���[�W
			 }
			 else {
				 printf("������Ȃ�����\n");
			 }
		}

		if (playerHP[0] <= 0)
		{
			printf("�v���C���[�P��|����");
			break;
		}
		if (playerHP[1] <= 0)
		{
			printf("���ł���");
			break;
		}

		printf("�v���C���[�P�̗̑� : %d\n", playerHP[0]);
		printf("�v���C���[�Q�̗̑� : %d\n\n", playerHP[1]);

		printf("==============================================\n\n");
	}
}