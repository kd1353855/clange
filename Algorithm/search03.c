#include<stdio.h>
main() {
	int i,s, low, high, mid, d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	for (i = 0; i < 11; i++) {
		printf("%02d ", d[i]);
	}
	low = 0;
	high = 10;
	printf("\n�T���l�����");
	scanf("%d", &s);

	while (low <= high) 
	{
		mid = (low + high) / 2;
		if (s == d[mid])break;
		if (s > d[mid]) {
			low = mid + 1;
		}
		if (s < d[mid]) {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("d[%d]�ɂ�����", mid);
	}


}