#include<stdio.h>
struct gamesoft_data {
	char name[20];
	char kyou[10];
	int tani;
};
main()
{
	struct gamesoft_data data;
	struct gamesoft_data* p;
	p = &data;
	printf("コース名：");
	scanf("%s", p->name);
	printf("教科名：");
	scanf("%s", p->kyou);
	printf("単位:");
	scanf("%d", &p->tani);
	printf("コース名：%s\n教科名：%s\n 単位：%d ", p->name, p->kyou, p->tani);
}