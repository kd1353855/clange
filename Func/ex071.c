#include<stdio.h>
//関数プロトタイプ宣言
int gokei(int a, int b, int c);
float heikin(int a,int b,int c);
main() {
	int a, b, c, g;
	float h;//実数

	printf("整数を３つ入力:");
	scanf("%d%d%d", &a, &b, &c);

	g = gokei(a, b, c);
	h = heikin(a, b, c);

	printf("合計は%d、平均は、%.2f",g,h);
}
int gokei(int a, int b, int c)
{
	int g;
	g = a + b + c;
	return g;
	//return a+b+c;でも動く
}
float heikin(int a, int b, int c)
{
	float h;
	h = (a + b + c)/3.0;//実数型だから.0を付ける
	return h;
	//return (a + b + c) / 3.0;// でも動く
}
