#include<stdio.h>
main() {
	int c;
	char dumy[256];
	char* p;

	p = gets(dumy);//����
	while (p != NULL)	//�f�[�^�̓��͊��� ctrl+z
	{
		printf("%s\n", dumy);
		p = gets(dumy);//����
	}

}