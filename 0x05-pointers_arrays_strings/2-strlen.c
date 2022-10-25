#include "main.h"

/**
  * _strlen - returns length of string
  * @s: pointer to the string variable
  * Return: variable
  */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0') /* looking for '/0' */
	{
		s++;
		counter += 1;
	}
	return (counter);
}
