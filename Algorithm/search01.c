#include<stdio.h>
main() {

	int i,s, data[10]={ 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++) {
		printf("%02d ", data[i]);
	}
	printf("\n探索値を入力してください");
	scanf("%d", &s);
	i = 0;
	while (i < 10)
	{
		if (s == data[i])break;
		i++;
	}
	if (i >= 10) {
		printf("見つからなかった");
	}
	else {
		printf("配列の%d行目に見つかった", i);
	
	}

	
}