#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char * convert(char buf[], double angle, char type)
{
	if (type == 'D')//функция выполняется при вводе символа 'D'
	sprintf(buf,"%lf%c",angle/57.296,type);
	    if (type == 'R')//функция выполняется при вводе символа 'R'
	    sprintf(buf, "%lf%c", angle*57.296,type);

	return buf;// возвращает сконвертированное значение в зависимости от введённой буквы
}