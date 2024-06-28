#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		b[i] = a[i];
		printf("”z—ñ[a]%d", a[i]);
		printf("”z—ñ[b]%d", b[i]);
		if (i < 10) {
			printf("\n");
		}
	}
}