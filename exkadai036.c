#include<stdio.h>
main()
{
	int su1, su2;
	printf("整数１？");
	scanf("%d", &su1);
	printf("整数２？");
	scanf("%d", &su2);
	if (su1 < su2) {
		printf("%dのほうが%dより%d小さい", su1, su2, su2 - (su1));
	}if (su1 == su2) {
		printf("%dと%dは等しい", su1, su2);
	}
	if(su1>su2){
		printf("%dのほうが%dより%d小さい", su2, su1, su1 - (su2));
	}
}