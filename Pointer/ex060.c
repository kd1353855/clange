#include<stdio.h>
main() {
	char data[ ] = "Language";
	char *p_data,ch;
	int i=0,j=0;
	p_data = data;
	printf("data[]=%s\n", p_data);
	printf("検索文字は？");
	scanf("%c", &ch);
	printf("検索結果は、");
	while ( *(p_data + i)) {
		if (ch == *(p_data + i)) {			//*(p_data+i)<=*p_ata
											//*(p_data+i)<=p_data++
			printf("%d ",i + 1);
			j++;
		}
		i++;
	}
	if (j > 0) {
		printf("文字目です\n");
	}
	else {
		printf("見つかりません\n");
	}
}