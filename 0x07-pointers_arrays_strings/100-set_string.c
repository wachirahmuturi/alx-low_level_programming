#include "main.h"

/**
  * set_string - sets the value of a pointer to char
  * @s: pointer to pointer
  * @to: pointer to a value
  */

void set_string(char **s, char *to)
{
	*s = to;
}
