#include<stdio.h>
main()
{
	int i,j=0, g;
	g = 0;
	while(1)
	{
		printf("�����H");
		scanf("%d",&i);
		if (i == -999)
		{
			break;
		}
		g += i;
		j++;
	}
	printf("���v�F%d\n", g);
	printf("���ρF%.3f", (float)g / j);
}