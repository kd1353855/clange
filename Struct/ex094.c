#include<stdio.h>
#include <string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
}; 
main() {
	struct profile pdata[5];
	struct profile* p=pdata;
	int i;
	for (i = 0; i < 5; i++) {
		printf("%dl–Ú", i + 1);
		printf("–¼‘O‚ð“ü—Í:");
		scanf("%s", p->name);

		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—ÍF");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);

		printf("ŒŒ‰tŒ^‚ð“ü—Í\nF");
		scanf("%s", p->blood);
		p++;
	}
	p = pdata;
	for (i = 0; i < 5; i++) 
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s--%d”N%02dŒŽ%02d“ú¶' ŒŒ‰tŒ^-%sŒ^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		p++;
	}
	
}