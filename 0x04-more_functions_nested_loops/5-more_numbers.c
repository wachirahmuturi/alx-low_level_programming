#include "main.h"
/**
  * more_numbers - prints 10 times the numbers 0..14
  * Return: always 0
  */

void more_numbers(void)
{
	char a;
	char b;

	b = '0';
	while (b <= '9')
	{
		for (a = 0; a <= 14; a++)
		{
			if (a / 10 > 0)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
		b++;
	}
}
