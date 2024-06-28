#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int kazu;

	srand(time(0));//—”‚ğ‰Šú‰»iƒVƒƒƒbƒtƒ‹j‚·‚é
	rand();
	kazu = rand();//‚O`‚R‚Q‚V‚U‚V‚Ì”ÍˆÍ‚Å‚ç‚ñ‚·‚¤‚ğ‹‚ß‚é
	printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", kazu);
}