#include<stdio.h>
main()
{
	int su;
	printf("�����H");
	scanf("%d", &su);
	if (su < 0) {
		printf("���͒l�̓}�C�i�X�ł�");
	}
	if (su == 0) {
		printf("���͒l�̓[���ł�");
	}
	if(su>0){
		printf("���͒l�̓v���X�ł�");
	}
}