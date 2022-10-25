#include "main.h"

/**
  * rev_string - reverses a string
  * @s: the string itself
  */

void rev_string(char *s)
{
	char *r;
	char temp;

	r = s;
	while (*(r + 1) != '\0')
	{
		r = r + 1;
	}

	while (s < r)
	{
		temp = *s;
		*s = *r;
		*r = temp;

		s = s + 1;
		r = r - 1;
	}
}
