#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s: string to be printed
  */

void print_rev(char *s)
{
	int counter;

	counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	while (counter >= 0)
	{
		_putchar(*s);
		s--;
		counter--;
	}
	_putchar('\n');
}
