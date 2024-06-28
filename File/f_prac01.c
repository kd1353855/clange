#include<stdio.h>
main()
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;
	printf("プレイヤーの名前は：");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア：%d(Enterで+1,eで終了)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
	}
}