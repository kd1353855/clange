#include<stdio.h>
main()
{
	int en, su1, su2;
	printf("‰‰Zq‚ğ“ü—Í:\n");
	scanf("%d", &en);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í");
	scanf("%d""%d", &su1, &su2);
	if (en == 1) {
		printf("%d", su1 + su2);
	}
	else {
		if (en == 2) {
			printf("%d", su1 - su2);
		}
		else {
			if (en == 3) {
				printf("%d", su1 * su2);
			}
			else {
				printf("%d", su1 / su2);
			}
		}
	}

}