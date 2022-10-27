#include "main.h"

/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0' ; i++)
	{
		j = 0;
		while (alphabet[j] != '\0' && s[i] != alphabet[j])
		{
			j++;
		}

		if (s[i] == alphabet[j])
			s[i] = rot13[j];
	}
	return (s);
}
