#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main() {
	struct profile data;
	struct profile* p;
	p = &data;
	printf("���O�����:");
	scanf("%s", p->name);

	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d",&p->birth[0], &p->birth[1], &p->birth[2]);

	printf("���t�^����́F");
	scanf("%s",p->blood);

	printf("%s--%d�N%02d��%02d���� ���t�^-%s�^", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);

	

}
		