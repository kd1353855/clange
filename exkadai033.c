#include<stdio.h>
main()
{
	int su;
	printf("整数？");
	scanf("%d", &su);
	if (su < 0) {
		printf("入力値はマイナスです");
	}
	if (su == 0) {
		printf("入力値はゼロです");
	}
	if(su>0){
		printf("入力値はプラスです");
	}
}