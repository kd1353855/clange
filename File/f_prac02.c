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
	printf("最高得点　名前：%s　スコア：%d\n", max_name, max_score);

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
	}
		if (score > max_score)
		{
			//ファイルの書き込み処理
			//ファイルのオープン
			fp = fopen("score.txt", "w");
			//2ファイルへのnameとscoreの書き込み
			fprintf(fp, "%s\n%d\n", name, score);
			//３ファイルのクローズ
			fclose(fp);
		}
	
}