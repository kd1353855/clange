#include<stdio.h>
main()
{
	int en, su1, su2;
	printf("���Z�q�����:\n");
	scanf("%d", &en);
	printf("�Q�̐��������");
	scanf("%d""%d", &su1, &su2);
	if (en == 1) {
		printf("%d", su1 + su2);
	}
	else {
		if (en == 2) {
			printf("%d", su1 - su2);
		}
		else {
			if (en == 3) {
				printf("%d", su1 * su2);
			}
			else {
				printf("%d", su1 / su2);
			}
		}
	}

}