#include "main.h"

/**
  * factorial - returns factorial of a number
  * @n: number to be factorized
  * Return: value of factorization
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
