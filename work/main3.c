#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>
int main()
{
	char buf[10];
	char type;
	double angle=0;
	    if (scanf("%lf%c", &angle, &type) == 0) // �������� �������� ������
		return puts("Data error!");
	       printf("%.4s\n", convert(buf,angle,type));//����� �� ����� ������������������ ��������
		
	return 0;

}