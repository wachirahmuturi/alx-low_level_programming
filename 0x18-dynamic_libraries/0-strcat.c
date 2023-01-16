#include "main.h"

/**
  * _strcat - append the src string to
  * the dest string, overwriting \0 at
  * the end of dest, then adds the \0
  * @dest: 2nd string
  * @src: 1st string
  *
  * Return: the pointer to src
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
