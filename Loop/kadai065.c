#include<stdio.h>
main()
{
	int su,g=0,i=0;
	do {
		printf("整数?");
		scanf("%d", &su);
		g += su;
		i++;

	} while (su != -999);
	g= su+999;
	printf("合計：%d", g);
	printf("平均：%d", g / i);
}