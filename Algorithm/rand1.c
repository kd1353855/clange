#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int kazu;

	srand(time(0));//�������������i�V���b�t���j����
	rand();
	kazu = rand();//�O�`�R�Q�V�U�V�͈̔͂ł�񂷂������߂�
	printf("��������������%d�ł�\n", kazu);
}