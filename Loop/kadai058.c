#include<stdio.h>
main()
{
	int i;
	char moji;
	for (i = 0; i <= 126; i++)
	{
		printf(" %x", i);
		for (moji = i; moji <='^'; moji++) {
			printf("%c",moji);
			if (i == 10) {
				printf("\n");
			}
		}
	}
}