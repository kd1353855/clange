#include<stdio.h>
main()
{
	int h, m, s;
	printf("�b������");
	scanf("%d", &s);
	if (s < 0) {
		printf("�v���X�̒l����͂��Ă�������");
	}
	else {
		if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d����%d��%d�b�ł�", h, m, s);

		}
		else {
			printf("�G���[");
		}
	}
}