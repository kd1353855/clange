#include<stdio.h>
main() {
	int i, s, d[10 + 1] = { 10,5,30,77,16,3,47,29,37,33,55 };
	printf("探索値を入力");
	scanf(" %d", &s);
	//番兵を仕込む
	d[10+1]=s;
	for (i = 0; s != d[i]; i++)
	{

	}
	if (i >= 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("d[%d]にあった\n", i);
	}

}