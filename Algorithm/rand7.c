#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	srand(time(0));
	rand();
	int i ,j,k=0;
	i = rand() % 1000 + 1;
	printf("1�`1000�̒��ł������\�z���Ă�������\n");
	do {
		printf("������̐��́H��\n");
		scanf("%d", &j);
		if (i > j) {
			printf("������̐���菬�����ł�\n");
		}
		if (i < j) {
			printf("������̐����傫���ł�\n");
		}
		k++;
	} while (i != j);
	printf("�����I%d��ڂœ�����܂���\n", k);
	
	}
	
	

