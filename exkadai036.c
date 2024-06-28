#include<stdio.h>
main()
{
	int su1, su2;
	printf("®”‚PH");
	scanf("%d", &su1);
	printf("®”‚QH");
	scanf("%d", &su2);
	if (su1 < su2) {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su1, su2, su2 - (su1));
	}if (su1 == su2) {
		printf("%d‚Æ%d‚Í“™‚µ‚¢", su1, su2);
	}
	if(su1>su2){
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su2, su1, su1 - (su2));
	}
}