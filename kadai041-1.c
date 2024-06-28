#include<stdio.h>
main()
{
	int i=0, j=0, g=0;
	printf("整数（-999で終了）");
	scanf("%d", &i);
	while (i!= - 999)
	{
		g += i;
		printf("整数（-999で終了）");
		scanf("%d", &i);
		j++;
		
	}
	printf("合計=%d", g);
	printf("平均=%d", g / j);

}