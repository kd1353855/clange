#include<stdio.h>
main() {
	char* p = "peach";
	char data1[10] = "banana", * p_data;
	char data2[10], * p_data2;

	p_data = data1;
	p_data2 = data2;

	while (*p_data2++ = *p_data++);//�����ŗv�f���i��ł�

	p_data = data1;//�擪�A�h���X�i�[����
	while (*p_data++ = *p++);

	printf("data[]=%s\n",data1);
	printf("data2[]=%s\n", data2);
}
