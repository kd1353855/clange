#include<stdio.h>
main()
{
	int month;
	printf("�������:");
	scanf("%d", &month);
	if (month == 2)
	{
		printf("�Q�W���ł�");
	}
	else
	{
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			printf("�R�O���ł�");
		}

		else
		{
			printf("�R�P���ł�");
		}
	}
}