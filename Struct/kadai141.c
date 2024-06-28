#include<stdio.h>
struct gamesoft_data {
	char name[20];
	char kyou[10];
	int tani;
};
main()
{
	struct gamesoft_data game = { "ゲームソフトIコース",{"C言語"},8};
	printf("コース名：%s\n", game.name);
	printf("教科名：%s\n", game.kyou);
	printf("単位：%d", game.tani);

}