#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int p, c;
	srand(time(0));
	rand();
	printf("何を出しますか？\n(１：グー２：チョキ３：パー)>");
	scanf("%d", &p);
	c = rand() % 3;
	switch (p)
	{
	case 1:
			printf("プレイヤーはグーです\n");
			break;
	case 2 :
			printf("プレイヤーはチョキです\n");
			break;
	case 3:
			printf("プレイヤーはパーです\n");
			break;
	}
	switch (c)
	{
	case 0:
			printf("コンピュータはグーです\n");
			break;
	case 1:
			printf("コンピュータはチョキです\n");
			break;
	case 2:
			printf("コンピュータはパーです\n");
			break;
	}
	switch (((p - 1) - c + 3) % 3) {
	case 0:
			printf("\nあいこです。\n");
			break;
	case 1:
				printf("\nコンピュータの勝ちです。\n");
				break;
	case 2:
					printf("\nプレイヤーの勝ちです。\n");
					break;

	}




	
}
