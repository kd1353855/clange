#include<stdio.h>
main() {
	int i, s, d[10 + 1] = { 10,5,30,77,16,3,47,29,37,33,55 };
	printf("�T���l�����");
	scanf(" %d", &s);
	//�ԕ����d����
	d[10+1]=s;
	for (i = 0; s != d[i]; i++)
	{

	}
	if (i >= 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("d[%d]�ɂ�����\n", i);
	}

}