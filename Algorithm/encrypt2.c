#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[30];
	int k[30];//�Í����L�[
	int i, n;
	srand(time(0));
	rand();
	printf("���������͂��Ă�������>");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		//���������߂�
		k[i] = rand() % 6;
		//���߂������ňÍ���
		s[i] += k[i];
	}
	printf("�Í���������́A%s\n", s);
	printf("�Í����L�[��");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
	
}