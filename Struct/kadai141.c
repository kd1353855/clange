#include<stdio.h>
struct gamesoft_data {
	char name[20];
	char kyou[10];
	int tani;
};
main()
{
	struct gamesoft_data game = { "�Q�[���\�t�gI�R�[�X",{"C����"},8};
	printf("�R�[�X���F%s\n", game.name);
	printf("���Ȗ��F%s\n", game.kyou);
	printf("�P�ʁF%d", game.tani);

}