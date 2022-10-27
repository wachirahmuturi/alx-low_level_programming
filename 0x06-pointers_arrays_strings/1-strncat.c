#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int h;
	int i;

	h = 0;
	while (dest[h] != '\0')
	{
		h++;
	}

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[h] = src[i];
		h++;
		i++;
	}
	dest[h] = '\0';

	return (dest);
}

