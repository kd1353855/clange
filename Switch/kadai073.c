#include<stdio.h>
main()
{
	int i;
	char moji;
	printf("10�i���̐����F");
	scanf("%d", &i);
	printf("�A���t�@�x�b�g�F�io or h or d)?");
	scanf("%s", &moji);
	switch (moji)
	{
	case'o':
		printf("%o", i);
		break;
	case'h':
		printf("%x", i);
		break;
	default:
		printf("%d", i);
		
	}
}