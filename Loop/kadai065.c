#include<stdio.h>
main()
{
	int su,g=0,i=0;
	do {
		printf("����?");
		scanf("%d", &su);
		g += su;
		i++;

	} while (su != -999);
	g= su+999;
	printf("���v�F%d", g);
	printf("���ρF%d", g / i);
}