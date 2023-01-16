#include "main.h"

/**
  * _strncpy - copies n bytes of a src file
  * @dest: initial string
  * @src: string to be copied into dest
  * @n: number of bytes in dest to remain
  * Return: desc
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

