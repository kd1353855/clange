#include<stdio.h>
main()
{
	int a = 5; /*宣言時に初期化することもできる*/
	float b;
	printf("a/2=%d \n", a / 2);/*整数同士の除算*/
	b = a / 2;//切り捨ててから代入
	printf("a/2=%f \n", b);//小数点以下を扱う場合
	printf("a/2=%f \n", a / 2.0);
}