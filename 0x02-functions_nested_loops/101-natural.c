#include <stdio.h>
#include "main.h"

/**
  * multiples_3_or_5 - prints sum of all
  * the multiples of
  * 3 or 5
  * below 1024 followed by a new line
  *
  * Return: sum
  */

int multiples_3_or_5(void)
{
	int n = 0;

	int sum = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
		n++;
	}
	_putchar(sum);
	_putchar('\n');
	return (0);
}
