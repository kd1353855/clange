#include<stdio.h>
main()
{
	//整数型変数　iの宣言と初期化
	int i=1;
	//do~whileの繰り返し処理
		do 
		{
		//i=？の表示（？の部分は変数iの値）
			printf("i=%d\n", i);
			//変数iのインクリメント
			i++;

		} while (i <= 20);
			
}