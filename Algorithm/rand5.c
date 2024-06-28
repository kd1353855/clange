#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	srand(time(0));
	rand();

	for (i = 1; i <= 100; i++){

		printf("%4d ",rand()%300+1);
		if (i % 10 == 0) //‚P‚OŒÂ‚²‚Æ‚É‰üs
		{
			printf("\n");
		}
	}

}