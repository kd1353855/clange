#include<stdio.h>
main()
{
	int count;
	float taizyu, sum;
	sum = 0;
	taizyu = 0;
	for (count = 1; sum <300; count++)
	{
		printf("%d人目の体重(kg)を入力",count);
		scanf("%f", &taizyu);
		sum += taizyu;
		printf("合計体重%.2fkg\n", sum);
	}
	count--;
	printf("許容重量超過！%d人目は乗れませんでした\n", count);
	printf("平均体重%.2f", sum / count);
}