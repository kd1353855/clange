
//��蕶�ɕs���͂���܂���A��������Ə������m�F���Ă��������B

#include <stdio.h>
�y�@�z charaStatus
{
 int HP;
 int MP;
 char name[8];
};

main()
{
	�y�@�z charaStatus player;
	�y�@�z charaStatus enemy;
	�y�@�z charaStatus* p_enemy;

	player.HP = 100;
	player.MP = 100;
	player.name[0] = player.name[1] = player.name[2] = player.name[3] = 'a';
	player.name[4] = '\0';

	enemy.HP = 10;
	enemy.MP = 10;
	enemy.name[0] = 's';
	enemy.name[1] = 'l';
	enemy.name[2] = 'i';
	enemy.name[3] = 'm';
	enemy.name[4] = 'e';
	enemy.name[5] = '\0';
	p_enemy = &enemy;


	printf("��l���̖��O��%s�ł�\n", player.name);�@���B
		printf("%s�����ꂽ!!!\n\n", �y�C�zname);

	printf("===�퓬�J�n===\n");
	printf("%s�̍U���I�I�I\n", player.name);

	�y�C�zHP -= 10;

	if (�y�C�zHP < 0)
	{
		("%s�̏����I�I�I\n", player.name);
		return 1;
	}

	printf("%s�̍U���I�I�I\n", �y�C�zname);

	player.HP -= 1;

	if (player.HP > 0)
	{
		printf("%s�͕����Ă��܂����E�E�E\n", player.name);
	}
	else
	{
		printf("%s�͂Ȃ�Ƃ������؂����I�I�I\n", player.name);
	}