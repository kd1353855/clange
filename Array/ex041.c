#include<stdio.h>
main()
{
	float box[3], g = 0.0;
	int i;
	for (i = 0; i<3; i++) {
		printf("ŽÀ”‚ð“ü—Í");
		scanf("%f", &box[i]);
	}
	for (i = 0; i < 3; i++) {
		g += box[i];
	}
	printf("‡Œv%.2f\n",g);
	printf("•½‹Ï%.2f\n",g / 3.0);
}