#include "main.h"
/**
  * main - prints alphabet in lowercase followed by a new line
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

	return (0);
}
