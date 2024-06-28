#include<stdio.h>
main() {
	char* p_game[3] = { "wii","ds","playstation4" };
	int i;
	char** p;
	for (i = 0; i < 3; i++) {
		p = &p_game[i];
		while (**p) {
			printf("%c", **p);
			(*p)++;//ˆê”Ô‰º‚Ì—v‘f‚ðŽè‚É“ü‚ê‚éB‚±‚Ìê‡‚¾‚Æw‚É‚È‚é
		}
		printf("\n");
	}
}