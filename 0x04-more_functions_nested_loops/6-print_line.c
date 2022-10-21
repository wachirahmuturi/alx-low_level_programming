#include "main.h"
/**
  * print_line - draws a straight line
  * @n: number of characters to draw
  * Return: always 0
  */

void print_line(int n)
{
	char a;
	char b;

	a = '_';
	for (b = n; b > 0; b--)
	{
		_putchar(a);
	}
	_putchar('\n');
}
