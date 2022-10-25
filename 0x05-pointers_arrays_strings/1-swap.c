#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a: pointer address of the 1st integer
  * @b: pointer address of the 2nd integer
  * Return: always 0
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
