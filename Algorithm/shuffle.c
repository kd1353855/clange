#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i, data[20], target, w;
	srand(time(0));
	rand();
	i = 0;
	while(i < 20){
		data[i] = i + 1;
		i++;
	}
	i = 0;
	while (i < 20) {
		target = rand() % 20;
		w = data[i];
		data[i] = data[target];
		data[target] = w;
		i++;
	}
	for (i = 0; i < 20; i++) {
		printf("%d \n", data[i]);
	}
}