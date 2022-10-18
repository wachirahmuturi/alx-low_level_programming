#include <stdio.h>
/**
  *main - description for getting ascii codes
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);
	/**
	  *%d displays the integer value of a character
	  *%c displays the actual character
	 */
	printf("ASCII value of %c = %d", c, c);
	putchar('\n');
	return (0);
}
