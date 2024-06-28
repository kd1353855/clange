#include<stdio.h>
main()
{
	int i,j=0, g;
	g = 0;
	while(1)
	{
		printf("整数？");
		scanf("%d",&i);
		if (i == -999)
		{
			break;
		}
		g += i;
		j++;
	}
	printf("合計：%d\n", g);
	printf("平均：%.3f", (float)g / j);
}