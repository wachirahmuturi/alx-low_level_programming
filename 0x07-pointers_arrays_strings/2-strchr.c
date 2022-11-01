#include "main.h"
#define NULL 0

/**
  * _strchr - returns a pointer to
  *	the first occurrence of char c
  *	in the string s or NULL if the
  *	character is not found
  * @s: string to search
  * @c: target characer
  * Return: pointer to that character in string
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != c; i++)
	{
		;
	}
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
