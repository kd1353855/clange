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
	printf("�R�[�X���F");
	scanf("%s", p->name);
	printf("���Ȗ��F");
	scanf("%s", p->kyou);
	printf("�P��:");
	scanf("%d", &p->tani);
	printf("�R�[�X���F%s\n���Ȗ��F%s\n �P�ʁF%d ", p->name, p->kyou, p->tani);
}