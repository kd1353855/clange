#include<stdio.h>
main()
{
	int i;
	printf("0から１００までの整数？");
	scanf("%d", &i);
	if (i < 29) {
		printf("その数値の判定結果は「１」です");
	}
	if (i >= 30 &&i<=49) {
		printf("その数値の判定結果は「2」です");
	}
	if (i >= 50 && i <= 79) {
			printf("その数値の判定結果は「3」です");
		}
	if (i >=80 && i <=89) {
		printf("その数値の判定結果は「4」です");
	}
	if (i>90) {
		printf("その数値の判定結果は「5」です");
	}


}