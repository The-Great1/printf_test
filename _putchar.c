#include <unistd.h>
#include "main.h"

/**
 * _putchar - a function that prints characters to standard output
 * just like the putchar function in C standard library
 * @c: The character to print
 *
 * Return: 1(Success)
 *	   -1(Error) and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
