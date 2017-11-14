#include "task2.h"

char* greet(int hour, int min)
{
	if (hour >= 0 && hour < 6)//функция возвращает 1, если значение времени лежит 
		return 1;            //в пределах от нуля часов до шести утра
	if (hour >= 6 && hour < 12)
		return 2;
	if (hour >= 12 && hour < 18)
		return 3;
	if (hour >= 18 && hour <= 23)
		return 4;
}