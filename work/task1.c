#include "task1.h"

int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'm' && weight == (height - 100))//сравнение введённого значения массы тела с идеальной величиной
	return 0;
	   if (gender == 'm' && weight > (height - 100))
	   return 1;
	      if (gender == 'm' && weight < (height - 100))
		  return -1;
	         if (gender == 'w' && weight == (height - 110))
		     return 0;
	            if (gender == 'w' && weight == (height - 110))
		        return 1;
	               if (gender == 'w' && weight == (height - 110))
		              return -1;
}

