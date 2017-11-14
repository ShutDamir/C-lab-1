#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"
int main()
{
	int sek=0, min=0, hour=0;
	   puts("Enter the time according to the pattern:\n \nhours:minutes:seconds\n");
	   scanf("%d:%d:%d", &hour, &min, &sek);
	      if (hour < 0 || hour > 23 || min < 0 || min>59 || sek < 0 || sek>59)//проверка вводимых значений времени
		  return puts("\nUncorrect time!\n");
	         if (greet(hour,min) == 1)      //в зависимости от возвращаемого функцией числа
		     return puts("\nGood night!\n");//программа пишет "Доброй ночи!", "Доброе утро!" и т.д.
	            if (greet(hour, min) == 2)
		        return puts("\nGood morning!\n");
	               if (greet(hour, min) == 3)
		           return puts("\nGood day!\n");
	                 if (greet(hour, min) == 4)
		             return puts("\nGood evening!\n");
	return 0;
}