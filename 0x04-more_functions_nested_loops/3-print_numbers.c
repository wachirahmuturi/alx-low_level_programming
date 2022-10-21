#include "main.h"
/**
  * print_numbers - prints the numbers 0 to 9
  *
  * Return: always 0
  */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
