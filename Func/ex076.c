#include<stdio.h>
void get_sumavg(int d1, int d2, int* sum,float *avg);
main() {
	int d1, d2, sum;
	float avg;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &d1, &d2);
	get_sumavg(d1,d2,&sum,&avg);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f‚Å‚·", sum, avg);
}
void get_sumavg(int d1, int d2, int* sum, float* avg)
{
	*sum = d1 + d2;
	*avg = (float)*sum / 2;
}
