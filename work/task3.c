#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char * convert(char buf[], double angle, char type)
{
	if (type == 'D')//������� ����������� ��� ����� ������� 'D'
	sprintf(buf,"%lf%c",angle/57.296,type);
	    if (type == 'R')//������� ����������� ��� ����� ������� 'R'
	    sprintf(buf, "%lf%c", angle*57.296,type);

	return buf;// ���������� ����������������� �������� � ����������� �� �������� �����
}