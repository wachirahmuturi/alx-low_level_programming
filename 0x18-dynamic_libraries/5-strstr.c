#include "main.h"
#define NULL 0

/**
  * _strstr - locates the 1st occurrence of the substring
  *	needle in the string haystack
  * @haystack: string to search through
  * @needle: substring
  * Return: pointer to the beginning of the located substr
  *	or NULL if substr not found
  */

char *_strstr(char *haystack, char *needle)
/*{
	int i = 0;
	int j;
	int match;

	while (haystack[i] != '\0')
	{
		j = 0;

		if (needle[j] == haystack[i])
		{
			match = i;
			while (haystack[match] == needle[j])
			{
				match++;
				j++;
			}

		}

		if (needle[j] == '\0')
		{
			haystack = &haystack[i];
			return (haystack);
		}
		i++;
	}
	return (NULL);
}*/

{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* interate through needle until match ends */
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			} /* if matched throughout, return haystack */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL); /* No match */
}
