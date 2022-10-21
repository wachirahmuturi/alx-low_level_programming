#include "main.h"
/**
  * print_square - prints a square shape
  * @size: the dimensions
  * Return: always 0
  */

void print_square(int size)
{
	if (size > 0)
	{
		int len;
		int width;

		for (len = 0; len < size; len++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
