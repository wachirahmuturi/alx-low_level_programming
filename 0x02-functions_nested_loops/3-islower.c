include "main.h"
/**
  * _islower - checks for lowercase character
  * @c: character to check
  * Return: 1 if c is lowercase otherwise returns 0
  */
int _islower(int c)
{
	if (c <= z && c >= a)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

