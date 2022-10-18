#include "main.h"
/**
  * print_alphabet_x10 - prints 10 times the alphabet,in lowercase,
  * followed by a new line.
  *
  * Return: Always 0.
  */

void print_alphabet_x10(void)
{
	char alpha;
	int sum;

	alpha = 'a';

	sum = 0;

	while (sum < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		alpha = 'a';
		sum++;
	}
}
