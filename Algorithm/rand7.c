#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	srand(time(0));
	rand();
	int i ,j,k=0;
	i = rand() % 1000 + 1;
	printf("1〜1000の中であたりを予想してください\n");
	do {
		printf("あたりの数は？＜\n");
		scanf("%d", &j);
		if (i > j) {
			printf("あたりの数より小さいです\n");
		}
		if (i < j) {
			printf("あたりの数より大きいです\n");
		}
		k++;
	} while (i != j);
	printf("正解！%d回目で当たりました\n", k);
	
	}
	
	

