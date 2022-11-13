#include "main.h"
#include <stdlib.h>

/**
  * _strlen - finds length of a string
  * @s: string
  * Return: length
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * string_nconcat - concatanates a 2nd string of n bytes
  *	to the first string
  * @s1: pointer to 1st string
  * @s2: pointer to 2nd string
  * @n: the number of bytes to be copied
  * Return: the concatanated string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int n1, i, j;
	char *ptr1, *saved;

	n1 = n;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n1 < 0) /* account for negative n bytes */
		return (NULL);
	if (n1 >= _strlen(s2)) /* account for n too big */
		n1 = _strlen(s2);

	ptr1 = malloc(sizeof(ptr1) * (_strlen(s1) + n1 + 1));

	if (ptr1 == NULL)
		return (NULL);

	saved = ptr1;

	for (i = 0; s1[i] != '\0'; i++) /* concat */
		ptr1[i] = s1[i];

	for (j = 0; j < n1; j++)
		ptr1[i + j] = s2[j];

	ptr1[i + j] = '\0';
	return (saved);
}
