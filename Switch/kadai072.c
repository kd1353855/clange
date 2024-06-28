#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット");
	scanf("%c", &moji);
	switch (moji)
	{
	case'a':
		printf("America\n Australia");
		break;
	case'e':
		printf("England");
		break;
	case'f':
		printf("France");
		break;
	case'j':
		printf("Japan");
		break;
	}
}