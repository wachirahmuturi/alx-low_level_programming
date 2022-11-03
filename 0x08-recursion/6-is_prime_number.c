#include "main.h"

/**
  * prime_values - function to loop through a series of digits
  * @n: integer value to check
  * @val: the divisor number
  * Return: 1 if true or 0 if not/
  */

int prime_values(int n, int val)
{
	if (n == val)
		return (1);
	if (n % val == 0)
		return (0);
	return (prime_values(n, val + 1));
}


/**
  * is_prime_number - checks if n is a prime number
  * @n:integer to be checked
  * Return: 1 if true or 0 if not
  */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime_values(n, divisor));
}
