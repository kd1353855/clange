#include <stdio.h>
main()
{
	int itbl[3] = { 10, 20, 30 };
	int* p_itbl;
	double dtbl[3] = { 10.0, 20.0, 30.0 };
	double* p_dtbl;//double��int��2�{
	p_itbl = itbl;//�z�񖼂̓A�h���X�i�z��̐擪�A�h���X�j
	printf("*p_itbl = %d\t", *p_itbl);
	p_itbl++;//int�^�|�C���g���{�{�����int�^��������
	printf("%d\t", *p_itbl);
	p_itbl++;
	printf("%d\n", *p_itbl);
	p_dtbl = dtbl;
	printf("*p_dtbl = %.1f\t", *p_dtbl);
	p_dtbl++;
	printf("%.1f\t", *p_dtbl);
	p_dtbl++;
	printf("%.1f\n", *p_dtbl);
}