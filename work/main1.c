#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#include <string.h>

int main()
{
	char gender[6]; 
	float height=0, weight=0;
	   puts("Enter your gender, woman or man:\n");
	   scanf("%s", gender);
	       if (gender[0] != 'm')//���� �������� ����� ���������� � ����� ���� ����� ����� 'm' ��� 'w'
		   if (gender[0] != 'w')//��������� ������� �� ������
		   return puts("\nData error\n");
	      puts("\nEnter your body weight in kilogtams. Use only one sign after the point:\n");
		  if (scanf("%f", &weight) == 0 || weight <= 0)//��� ����� �������� ��� �������� ������ ��� ������ ����,
		  {                                           //��������� ������� �� ������
			  puts("\nData error.\n");
			  return 0;
		  }
	            puts("\nEnter your height in centimeters:\n");
			    if (scanf("%f", &height) == 0 || height <= 0)
			 {
				 puts("\nData error.\n");
				 return 0;
			 }
	            if (getRecommendation(gender[0],height,weight) == 0)//���� ������� ���������� "0", �� ��� ���� �������
		        puts("\nYour weight is ideal!\n");
	               if (getRecommendation(gender[0], height, weight) < 0)//���� ������� ���������� "-1",
		           puts("\nYou need to increase your body weight!\n"); //�� ���������� ������� �����
	                  if (getRecommendation(gender[0], height, weight) > 0)//���� ������� ���������� "1",
		              puts("\nYou need to lose weight!\n");               //�� ���������� ��������
	return 0;
}