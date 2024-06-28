#include<stdio.h>
main()
{
	FILE* fp;
	int a = 10, b = 20;
	fp = fopen("fille01.txt", "w");
	fprintf(fp, "‚Ğ‚Ì‚«‚Ì–_\n");
	fprintf(fp, "“º‚ÌŒ• |‚ÌŒ•\n");
	fprintf(fp, "1 10 “º‚ÌŒ•\n");
	fclose(fp);
	
}