#include<stdio.h>
#include <string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
}; 
main() {
	struct profile pdata[5];
	struct profile* p=pdata;
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d�l��", i + 1);
		printf("���O�����:");
		scanf("%s", p->name);

		printf("���N�������󔒂ŋ�؂��ē��́F");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);

		printf("���t�^�����\n�F");
		scanf("%s", p->blood);
		p++;
	}
	p = pdata;
	for (i = 0; i < 5; i++) 
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s--%d�N%02d��%02d����' ���t�^-%s�^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		p++;
	}
	
}