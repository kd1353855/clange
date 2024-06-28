#include<stdio.h>
main() {

	int i,s, data[10]={ 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++) {
		printf("%02d ", data[i]);
	}
	printf("\n’Tõ’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%d", &s);
	i = 0;
	while (i < 10)
	{
		if (s == data[i])break;
		i++;
	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("”z—ñ‚Ì%ds–Ú‚ÉŒ©‚Â‚©‚Á‚½", i);
	
	}

	
}