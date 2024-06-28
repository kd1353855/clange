#include<stdio.h>
main()
{
	char s[30];
	int k[30];//暗号化キー
	int i;
	printf("文字列を入力してください>");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//複号化キーの入力
		printf("s[%d]の復号キー>",i);
		scanf("%d", &k[i]);

		//復号化キーを使って暗号化
		s[i] -= k[i];
	}
	printf("複号化済みの文字列は、%s\n", s);
}