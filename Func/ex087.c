#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	int sum;
	if(argc==3)
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%s+%s=%d", argv[1], argv[2], sum);
	}
	else {
		printf("�Q�̈����i�����j��ݒ肵�Ď��s���Ă�������");
	}
}