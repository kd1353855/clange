#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int w[10];
	int i;
	printf("a‚Æb‚ð“ü‚ê‘Ö‚¦‚é‚Æ\n");
	for (i = 0; i < 10; i++)
	{
		w[i] = a[i];
		a[i] = b[i];
		b[i] = w[i];
		printf("”z—ña=%d", a[i]);
		printf("\n");
		
	}
	for (i = 0; i < 10; i++) 
	{
		w[i] = a[i];
		a[i] = b[i];
		b[i] = w[i];
		printf("\n”z—ñb=%d", b[i]);
		
	}
	

}