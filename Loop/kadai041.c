#include<stdio.h>
main()
{
	int gokei, i,j;
	gokei = 0;
	i = 0;
	j = 0;
	printf("”‚ğ“ü—Í(-‚X‚X‚X‚ÅI—¹)");
	scanf("%d", &i);
	while (i != -999) {
		gokei+= i;
		printf("”‚ğ“ü‚ê‚Ä-(‚X‚X‚X‚ÅI—¹)");
		scanf("%d", &i);
		j++;
	}
	printf("‡Œv%d\n", gokei);
	printf("•½‹Ï%d", gokei / j);
}