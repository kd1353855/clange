#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int* p_a, * p_b;
	printf("���s�O:a=%d\t b=%d\n", a, b);
	p_a = &a;
	p_b = &b;
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("���s��:a=%d\t b=%d\n",a,b );
}