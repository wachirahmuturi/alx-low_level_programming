#include "main.h"

/**
  * string_toupper - changes all lowercase
  * letters of a string to uppercase
  * @s: the pointer address of the string
  * Return: the new string
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}
