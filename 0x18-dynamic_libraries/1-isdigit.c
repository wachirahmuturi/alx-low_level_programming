#include "main.h"

/**
  * _isdigit - checks for a digit(0..9)
  * @c: caharacter to check
  * Return: 1 if digit otherwise 0
  */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
