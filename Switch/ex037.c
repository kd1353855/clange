#include<stdio.h>
main()
{
	char en;
	printf("‰‰Zq‚ğ“ü‚ê‚Ä:");
	scanf("%c", &en);
	switch(en)
	{
	case '+': 
		printf("‰ÁZ‚Å‚·\n");
		break;
	case '-':
		printf("Œ¸Z\n");
		break;
	case '*':
		printf("æZ‚Å‚·\n");
		break;
	case '/':
		printf("œZ‚Å‚·\n");
		break;

	case '%':
		printf("è—]‚Å‚·\n");
		break;
	default:
		printf("‚»‚Ì‘¼‚Å‚·");



	}
}