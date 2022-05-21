#include "main.h"

/**
 * print_dec - Prints an integer.
 * @n: The integer to be printed.
 */
void print_dec(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
 * print_char - prints upper and lower case alphabets
 * @c: the char to be printed
 * Return: NULL
 */

void print_char(char c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		_putchar(c);
	}
}

/**
 * print_string - prints strings passed as arguments
 * @s: string required to print
 */

void print_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
