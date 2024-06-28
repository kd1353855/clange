//#include<stdio.h>
//main() {
//	int data, sum, cnt;
//	int ret;
//	char dumy[256];
//	sum = 0;
//	cnt = 0;
//	printf("®”:");
//	ret=scanf("%d", &data);
//	while ( ret !=EOF);
//	{
//		sum += data;
//		cnt++;
//		printf("®”:");
//		ret=scanf("%d", &data);
//	}
//	
//	printf("‡Œv=%d •½‹Ï=%.2f\n", sum, (float)sum/cnt);
//}
#include <stdio.h>
main()
{
	int num, sum, cnt;
	sum = cnt = 0;
	printf("®”:");
	while (scanf("%d", &num) != EOF) {
		sum += num;
		cnt++;
		printf("®”:");
	}
	printf("‡Œv=%d •½‹Ï=%.2f\n", sum, (float)sum / cnt);
}

