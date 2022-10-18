#include "main.h"

/**
  * _isalpha - checks for alphabetic character
  * @c: character to be checked
  *
  * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
  *
  */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	/* second condition */
	else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
