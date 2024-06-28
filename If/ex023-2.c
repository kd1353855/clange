#include<stdio.h>
main()
{
	int sei;
	printf("¼—ï‚ğ“ü—Í");
	scanf("%d", &sei);
	if (sei  % 4 == 0 && sei % 100 !=0 || sei % 400 == 0)
	{
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	
	else {
		printf("‚¤‚é‚¤”N‚Å‚Í‚È‚¢");
	}
}