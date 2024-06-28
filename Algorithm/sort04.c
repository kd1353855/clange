/* sort04.c */
/* シェルソート(改良型挿入法)による昇順ソート */
#include <stdio.h>
/* データ数を定義 */
#define DCNT = 8
main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j;
	int w,k;
	int gap;
	// シェルソート
	gap = DCNT / 2; // 全データ数/2で最初の比較間隔を求める
	while (gap > 0) {
		for (i = gap; i < DCNT; i++) {
			for (j = i - gap; j >= 0; j -= gap) {
				// 確認用に表示
				
				for (k = 0; k < DCNT; k++) {
					printf("%d ", d[k]);
				}
				printf("\n");
				if (d[j + gap] < d[j]) { // j+gap 番目とj 番目と比較
					// d[j]とd[j+gap]の入れ替え
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else {
					break;
				}
			}
		}
		gap = gap / 2; // 比較間隔を半分にする
		printf("-------------------------\n"); // 確認用に表示
	}
	// 結果の表示
	for (i = 0; i < DCNT; i++) {
		printf("%d ", d[i]);
	}
}