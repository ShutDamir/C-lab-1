#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
int main()
{
	int feet=0, inches=0;
	   puts("\nEnter your hight 5'11:\n");
	      if (scanf("\n%d'%d", &feet, &inches) == 0)//��� ����� �������� ��������� ������� �� ������
		  return puts("Data error!\n");
	         if (feet < 0 || inches < 0)//��� ����� �������� ������ � ����� ������ ����, ��������� ������� �� ������
		     return puts("Data error!\n");
	            printf("\n%.1f\n",convert(feet,inches));//����� �� ����� ���������� ���������������
	return 0;
}