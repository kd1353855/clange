#include<stdio.h>
int add(int a, int b);//プロトタイプ宣言
main() {
	int a, b, kotae;
	printf("整数を２つ入力:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);//関数のaddの呼び出し
	printf("合計は%dです\n", kotae);
}
//関数addの記述
int add( int a,int b)
{
	int ans;
	ans = a + b;
	return ans;
}