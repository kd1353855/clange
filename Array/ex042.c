#include<stdio.h>
main()
{
	char date[] = "Apple";

	printf("�ꕶ�����\��\n");
	int i;
	for (i = 0; date[i]!='\0'; i++) 
	{
		printf("%c\n", date[i]);
	}
	printf("\n�������\��\n");
	//printf("%s\n",&date[0]);//%s�̎��̓A�h���X���w��(�����g���j
	printf("%s\n", date);//�z�񖼂��������Ɛ擪�A�h���X������\��
}