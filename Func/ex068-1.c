#include<stdio.h>
main() {
	int c;
	char dumy[256];
	char data,data2;//���͗p

	c = scanf("%c%c",&data,&data2);

	while (c != EOF)	//�f�[�^�̓��͊��� ctrl+z
	{
		printf("%d",c);
		putchar('\n');
		gets(dumy);		//���̓o�b�t�@�̃N���A
		c = scanf("%c%c", &data, &data2);
	}

	printf("%d\n", printf("HELOO"));//5���\�������
	printf("%d\n", printf("����ɂ���"));//10���\�������

}