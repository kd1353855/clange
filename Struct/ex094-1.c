#include<stdio.h>
#include<string.h>
	struct day {
		int nen;
		int tuki;
		int hi;
	};
	struct profile {
		char name[20];
		struct day birth;
		char blood[5];
	};
	main()
	{
		struct profile pdat[5] =
		{
			{"a",{2000,5,2},"A"},
			{"b",{2000,11,23},"B"},
			{"c",{2000,2,1},"A" },
			{"d",{2000,2,17},"AB"},
			{"e",{2000,3,15},"O"} };
		struct profile* p = pdat;
		
		int i;
		for (i = 0; i < 5; i++) {
			if (p->birth.tuki == 2) {
				printf("%s--", p->name);
				printf(" % d�N % 02d�� % 02d����", p->birth.nen, p->birth.tuki, p->birth.hi);
				printf("���t�^-%s�^\n", p->blood);
			}
			p++;
		}
	}