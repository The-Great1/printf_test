#include "main.h"

/**
 * count - returns the length of an integer passed into it
 * @n: The integer to be counted
 * Return: Length of the integer
 */
int count(int n)
{
	int i = 1;

	if (n < 0)
	{
		i++;
		n = -n;
	}

	while ((n / 10) > 0)
	{
		i++;
		n = n / 10;
	}

	return (i);
}

/**
 * print_dec - Prints an integer.
 * @n: The integer to be printed.
 * Return: Length of the integer.
 */
int print_dec(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		print_dec(num / 10);
	}

	_putchar((num % 10) + '0');


	return (count(n));
}

/**
 * print_char - prints upper and lower case alphabets
 * @c: the char to be printed
 * Return: 1 (Success)
 */

int print_char(char c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		_putchar(c);
	}
	return (1);
}

/**
 * print_string - prints strings passed as arguments
 * @s: string required to print
 * Return: Length of string
 */

int print_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_bin - prints the binary form of decimal numbers passed int it
 * @b: decimal number to be printed in binary form
 * Return: Length of number printed out
 */

/**
 * Oh, btw, this code doesn't work for some reason
 * Probably an issue with the string syntax for bin[position = (b...
 * Fix up!
 */

int print_bin(int b)
{
	int position = 0, count = 0;
	char *bin;
	while (b > 0)
	{
		bin[position] = (b % 2);
		b = b / 2;
		position++; count++;
	}
	position++; count++;
	bin[position] = '\0';
	position--;

	while (position >= 0)
	{
		_putchar(bin[position]);
		position--;
	}

	return (count);
}
