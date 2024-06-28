#include <stdio.h>
main()
{
	int itbl[3] = { 10, 20, 30 };
	int* p_itbl;
	double dtbl[3] = { 10.0, 20.0, 30.0 };
	double* p_dtbl;//doubleはintの2倍
	p_itbl = itbl;//配列名はアドレス（配列の先頭アドレス）
	printf("*p_itbl = %d\t", *p_itbl);
	p_itbl++;//int型ポイントを＋＋するとint型が一つずれる
	printf("%d\t", *p_itbl);
	p_itbl++;
	printf("%d\n", *p_itbl);
	p_dtbl = dtbl;
	printf("*p_dtbl = %.1f\t", *p_dtbl);
	p_dtbl++;
	printf("%.1f\t", *p_dtbl);
	p_dtbl++;
	printf("%.1f\n", *p_dtbl);
}