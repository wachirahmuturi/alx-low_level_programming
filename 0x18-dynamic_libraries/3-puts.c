#include "main.h"

/**
  * _puts - prints a string followed by /n
  * @str: pointer address of string to be printed
  */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
