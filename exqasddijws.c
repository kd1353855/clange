
//問題文に不備はありません、しっかりと処理を確認してください。

#include <stdio.h>
【�@】 charaStatus
{
 int HP;
 int MP;
 char name[8];
};

main()
{
	【�@】 charaStatus player;
	【�@】 charaStatus enemy;
	【�@】 charaStatus* p_enemy;

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


	printf("主人公の名前は%sです\n", player.name);　←�B
		printf("%sが現れた!!!\n\n", 【�C】name);

	printf("===戦闘開始===\n");
	printf("%sの攻撃！！！\n", player.name);

	【�C】HP -= 10;

	if (【�C】HP < 0)
	{
		("%sの勝利！！！\n", player.name);
		return 1;
	}

	printf("%sの攻撃！！！\n", 【�C】name);

	player.HP -= 1;

	if (player.HP > 0)
	{
		printf("%sは負けてしまった・・・\n", player.name);
	}
	else
	{
		printf("%sはなんとか逃げ切った！！！\n", player.name);
	}