#include<stdio.h>
main()
{
	int month;
	printf("ŒŽ‚ð“ü—Í:");
	scanf("%d", &month);
	if (month == 2)
	{
		printf("‚Q‚W“ú‚Å‚·");
	}
	else
	{
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			printf("‚R‚O“ú‚Å‚·");
		}

		else
		{
			printf("‚R‚P“ú‚Å‚·");
		}
	}
}