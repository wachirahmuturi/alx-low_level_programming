#ifndef _putchar
#define _putchar

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: On success 0.
  * On error, -1 is returned, and error is set appropriately
  */

int _putchar(char c);

/**
 *print_alphabet- print lowercase alphabet
  */
void print_alphabet(void);

/**
 * void print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 * followed by a new line
 */
void print_alphabet_x10(void);

/**
  * int _islower(int c) - checks for lowercase character
  * @c: character to check
  * Return: 1 if lowercase otherwise 0
  */
int _islower(int c);

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, otherwise 0 if not alphabet character
 */

int _isalpha(int c);

/**
  * print_sign(int n) - prints the sign of a number
  * @n: number to be checked
  * Return: 1 if (n>0), 0 if (n=0), -1 if (n<0)
  */
int print_sign(int n);

/**
 * int _abs - compute absolute value of integer
 * @int: integer argument
 * Return: absolute value
 */
int _abs(int);

/**
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: last digit of number
 */

int print_last_digit(int);

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */
void jack_bauer(void);

/**
 * times_table - print multiplication table
 */

void times_table(void);

/**
 * add - add two integers
 * @a: two integer arguments
 * @b: two integer arguments
 * Return: sum
 */

int add(int a, int b);

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n);

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n);

/**
  * multiples_3_or_5 - print all the multiples of 3 or 5
  * below 1024 followed by a new line
  * Return: always 0
  */
int multiples_3_or_5(void);
#endif
