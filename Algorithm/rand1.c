#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int kazu;

	srand(time(0));//乱数を初期化（シャッフル）する
	rand();
	kazu = rand();//０〜３２７６７の範囲でらんすうを求める
	printf("発生した乱数は%dです\n", kazu);
}