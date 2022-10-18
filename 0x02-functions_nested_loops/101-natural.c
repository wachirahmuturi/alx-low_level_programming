#include <stdio.h>

/**
  * main - prints sum of all
  * the multiples of
  * 3 or 5
  * below 1024 followed by a new line
  *
  * Return: 0
  */

int main(void)
{
	int n;
	int sum;

	n = 0;
	sum = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);

	return (0);
}
