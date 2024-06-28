#include<stdio.h>
main() {
	int c;
	char dumy[256];
	char* p;

	p = gets(dumy);//“ü—Í
	while (p != NULL)	//ƒf[ƒ^‚Ì“ü—ÍŠ®—¹ ctrl+z
	{
		printf("%s\n", dumy);
		p = gets(dumy);//“ü—Í
	}

}