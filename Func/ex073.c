#include<stdio.h>
void error_msg(void);//�v���g�^�C�v�錾
int main(void)
{
	int a, b;
	printf("data1 data2 ?:");
	scanf("%d%d", &a, &b);
	if (b == 0) 
	{
		error_msg();//�֐�error_msg�̌Ăяo��
	}
	else
	{
		printf(" %d/%d=%d�E�E�E%d\n", a, b, a / b, a % b);
	}
}

//�֐�display�̋L�q
void error_msg(void) {
	printf("0�Ŋ���Z�ł��܂���\n");
	return;
}