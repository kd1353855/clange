#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k;
	srand(time(0));
	rand();
	k = rand() % 101;
	if (k < 31) {
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«I\n");
	}
	else {
		printf("’ÊíUŒ‚\n");
	}
}