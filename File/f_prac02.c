#include<stdio.h>
main()
{
	int max_score,score = 0;
	char max_name[20],ch;
	char name[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("�ō����_�@���O�F%s�@�X�R�A�F%d\n", max_name, max_score);

	printf("�v���C���[�̖��O�́F");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A�F%d(Enter��+1,e�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
		if (score > max_score)
		{
			//�t�@�C���̏������ݏ���
			//�t�@�C���̃I�[�v��
			fp = fopen("score.txt", "w");
			//2�t�@�C���ւ�name��score�̏�������
			fprintf(fp, "%s\n%d\n", name, score);
			//�R�t�@�C���̃N���[�Y
			fclose(fp);
		}
	
}