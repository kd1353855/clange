#include<stdio.h>
main()
{
	int i=0, j=0, g=0;
	printf("�����i-999�ŏI���j");
	scanf("%d", &i);
	while (i!= - 999)
	{
		g += i;
		printf("�����i-999�ŏI���j");
		scanf("%d", &i);
		j++;
		
	}
	printf("���v=%d", g);
	printf("����=%d", g / j);

}