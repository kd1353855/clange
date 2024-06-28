#include<stdio.h>
main()
{
	char date[] = "Apple";

	printf("一文字ずつ表示\n");
	int i;
	for (i = 0; date[i]!='\0'; i++) 
	{
		printf("%c\n", date[i]);
	}
	printf("\n文字列を表示\n");
	//printf("%s\n",&date[0]);//%sの時はアドレスを指定(＆を使う）
	printf("%s\n", date);//配列名だけ書くと先頭アドレスだけを表す
}