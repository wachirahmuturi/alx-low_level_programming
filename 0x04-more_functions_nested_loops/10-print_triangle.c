#include "main.h"
/**
  * print_triangle - prints a right angled triangle
  * @size: height=base dimension
  * Return: always 0
  */

void print_triangle(int size)
{
	int height;
	int base;
	int draw;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (base = 1; base <= (size - height); base++)
		{
			_putchar(' ');
		}
		for (draw = 1; draw <= height; draw++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
