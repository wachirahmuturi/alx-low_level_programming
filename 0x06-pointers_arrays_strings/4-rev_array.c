#include "main.h"

/**
  * reverse_array - reverses the contents of an array
  * of integers
  * @a: the array
  * @n: the size of the array
  */

void reverse_array(int *a, int n)
{
	int *end;
	int temp;

	end = (a + n - 1);
	while (a < end)
	{
		temp = *a;
		*a = *end;
		*end = temp;
		a++;
		end--;
	}
}
