#include<stdio.h>
main()
{
	float box[3], g = 0.0;
	int i;
	for (i = 0; i<3; i++) {
		printf("���������");
		scanf("%f", &box[i]);
	}
	for (i = 0; i < 3; i++) {
		g += box[i];
	}
	printf("���v%.2f\n",g);
	printf("����%.2f\n",g / 3.0);
}