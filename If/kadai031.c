#include<stdio.h>
main()
{
	float i, j;
	printf("�Q�̎����l");
	scanf("%f%f", &i, &j);
	if (i > j)
	{
		printf("�傫���ق���%.1f�ł�", i);
	}
	else
	{
		printf("�傫���ق���%.1f�ł�", j);
	}
}