#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int w[10];
	int i;
	printf("aとbを入れ替えると\n");
	for (i = 0; i < 10; i++)
	{
		w[i] = a[i];
		a[i] = b[i];
		b[i] = w[i];
		printf("配列a=%d", a[i]);
		printf("\n");
		
	}
	for (i = 0; i < 10; i++) 
	{
		w[i] = a[i];
		a[i] = b[i];
		b[i] = w[i];
		printf("\n配列b=%d", b[i]);
		
	}
	

}