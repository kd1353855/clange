#include<stdio.h>
int tbl_gokei3(int tbl[], int number);
main()
{
	int a[] = { 10,20,30,40,50, }, gokei;
	gokei= tbl_gokei3(a, 5);
	printf("gokei=%d\n", gokei);
}
int tbl_gokei3(int tbl[], int number) 
{
	int i, gokei;
	for (i = 0, gokei = 0; i < number; i++)
	{
		gokei += tbl[i];
	}
	return gokei;
}