#include<stdio.h>
main()
{
	float i, j;
	printf("２つの実数値");
	scanf("%f%f", &i, &j);
	if (i > j)
	{
		printf("大きいほうは%.1fです", i);
	}
	else
	{
		printf("大きいほうは%.1fです", j);
	}
}