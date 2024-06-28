#include<stdio.h>
void display1(int );//プロトタイプ宣言
void display2(int*);
//void display1(int n1);//プロトタイプ宣言
//void display2(int* n2);

main() {
	int a, b;
	printf("数値a?:");
	scanf("%d", &a);
	display1(a);//関数display1の呼び出し
	printf("a=%d\n\n", a);
	printf("数値b?");
	scanf("%d", &b);
	display2(&b); //関数display2の呼び出し
	printf("b=%d\n\n", b);
}
//関数display1の記述
void display1(int n) {
	printf("数値aは%dです。\n", n);
	n += 10;
	return;
}
//関数display2の記述
void display2(int *n) {
	printf("数値bは%dです。\n", *n);
	*n += 10;
	return;
}