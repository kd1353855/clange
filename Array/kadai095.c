#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i,g=0;
	printf("配列a=");
	for(i=0;i<10;i++)
	{
		printf(" %d", a[i]);
		g += a[i];
		
	}
	printf("\n合計＝%d 平均＝%d\n", g,g/i);
	printf("配列b=");
	g = 0;
	for (i = 0; i < 10; i++)
	{
		printf(" %d", b[i]);
		g += b[i];

	}
	printf("\n合計＝%d 平均＝%d", g, g / i);
}