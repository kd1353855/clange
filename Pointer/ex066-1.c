#include<stdio.h>
main() {
	char* p_game[3] = { "wii","ds","playstation4" };
	int i;
	char** p;
	for (i = 0; i < 3; i++) {
		p = &p_game[i];
		while (**p) {
			printf("%c", **p);
			(*p)++;//一番下の要素を手に入れる。この場合だとwになる
		}
		printf("\n");
	}
}