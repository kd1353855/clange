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
		{1,"–kŠC“¹",NULL},
		{2,"ÂXŒ§",NULL},
		{3,"ŠâŽèŒ§",NULL},
		{4,"‹{éŒ§",NULL},
		{5,"H“cŒ§",NULL},
		{6,"ŽRŒ`Œ§",NULL},
		{7,"•Ÿ“‡Œ§",NULL},
		{DATA_END,"",NULL} };
	struct ken* p, * wp;
	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = ken_data;
	//•ºŒÉŒ§‚Ì’Ç‰Á
	struct ken hyogo = { 28, "•ºŒÉŒ§", NULL };
	
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//ƒf[ƒ^‚Ìíœ
	//ÂXŒ§‚Ìnext‚É‹{éŒ§‚ÌƒAƒhƒŒƒX‚ð“ü‚ê‚é
	ken_data[1].next = &ken_data[3];
	//•ºŒÉŒ§‚Ì’Ç‰Á
	ken_data[0].next = &hyogo;
	hyogo.next = &ken_data[1];
	//ŽRŒ`Œ§‚ðÁ‚µ‚Ä‚Ý‚é
	ken_data[4].next = &ken_data[6];



	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code=%d name=%s\n", p->code, p->name);
	}
}