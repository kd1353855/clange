#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	srand(time(0));
	rand();
	int i ,j,k=0;
	i = rand() % 1000 + 1;
	printf("1`1000‚Ì’†‚Å‚ ‚½‚è‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	do {
		printf("‚ ‚½‚è‚Ì”‚ÍHƒ\n");
		scanf("%d", &j);
		if (i > j) {
			printf("‚ ‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		if (i < j) {
			printf("‚ ‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		k++;
	} while (i != j);
	printf("³‰ğI%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n", k);
	
	}
	
	

