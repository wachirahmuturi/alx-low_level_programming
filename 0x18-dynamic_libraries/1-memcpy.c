#include "main.h"

/**
  * _memcpy - copies n bytes from
  *		memory area src to dest
  * @dest: destination
  * @src: source
  * @n: number of bytes
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
