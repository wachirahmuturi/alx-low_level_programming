#include "main.h"
/**
  * print_diagonal - draws a diagonal line
  * @n: number of characters to draw
  * Return: always 0
  */

void print_diagonal(int n)
{
	int space;
	int counter;

	if (n > 0)
	{
		for (space = 0; space < n; space++)
		{
			for (counter = 0; counter < space; counter++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
