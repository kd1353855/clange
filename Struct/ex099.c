#include<stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken	ken_data[] = {
		{1,"�k�C��",NULL},
		{2,"�X��",NULL},
		{3,"��茧",NULL},
		{4,"�{�錧",NULL},
		{5,"�H�c��",NULL},
		{6,"�R�`��",NULL},
		{7,"������",NULL},
		{DATA_END,"",NULL} };
	struct ken* p, * wp;
	//�����N�̐ݒ�
	p = wp = ken_data;
	//���Ɍ��̒ǉ�
	struct ken hyogo = { 28, "���Ɍ�", NULL };
	
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//�f�[�^�̍폜
	//�X����next�ɋ{�錧�̃A�h���X������
	ken_data[1].next = &ken_data[3];
	//���Ɍ��̒ǉ�
	ken_data[0].next = &hyogo;
	hyogo.next = &ken_data[1];
	//�R�`���������Ă݂�
	ken_data[4].next = &ken_data[6];



	//�����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code=%d name=%s\n", p->code, p->name);
	}
}