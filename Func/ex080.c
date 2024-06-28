#include<stdio.h>
#define TBL_END 5//マクロはほかのものと混じらないように大文字で書く
int tbl_gokei4(int* p);//プロトタイプ宣言
main()
{
	int a[] = { 10,20,30,40,50,}, gokei;
	gokei = tbl_gokei4(a);//関数tbl_gokei4の呼び出し
	printf("gokei=%d\n", gokei);
}

int tbl_gokei4(int* p) {
	int gokei,i;
	for (gokei = 0, i = 0; i < TBL_END; i++) {
		gokei += *(p + i);//gokei+=*p++;でも可
	}
	return gokei;
}