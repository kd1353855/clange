#include<stdio.h>
main()
{
	int gokei, i,j;
	gokei = 0;
	i = 0;
	j = 0;
	printf("�������(-�X�X�X�ŏI��)");
	scanf("%d", &i);
	while (i != -999) {
		gokei+= i;
		printf("��������-(�X�X�X�ŏI��)");
		scanf("%d", &i);
		j++;
	}
	printf("���v%d\n", gokei);
	printf("����%d", gokei / j);
}