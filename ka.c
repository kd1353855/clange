#include<stdio.h>
main()
{
	int count;
	float taizyu, sum;
	sum = 0;
	taizyu = 0;
	for (count = 1; sum <300; count++)
	{
		printf("%d�l�ڂ̑̏d(kg)�����",count);
		scanf("%f", &taizyu);
		sum += taizyu;
		printf("���v�̏d%.2fkg\n", sum);
	}
	count--;
	printf("���e�d�ʒ��߁I%d�l�ڂ͏��܂���ł���\n", count);
	printf("���ϑ̏d%.2f", sum / count);
}