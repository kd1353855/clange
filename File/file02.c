#include<stdio.h>
main()
{
	int i,lv,hp;
	FILE* fp;
	char str[256],equip[256];
	fp = fopen("fille01.txt", "r");
	/*for (i = 0; i < 3; i++)
	{
		fscanf(fp, "%s", str);
		printf("%s\n", str);
	}*/
	/*fscanf(fp, "%d%d%s", &lv, &hp, equip);
	printf("lv:%d hp:%d ‘•”õ:%s\n", lv, hp, equip);*/
	fgets(equip, sizeof(equip), fp);
	printf("%s\n", equip);
	fclose(fp);
}