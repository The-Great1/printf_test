#include "main.h"
/**
 * _printf - returns a formatted string to stdout, taking
 * format specifiers into consideration and printing the
 * corresponding arguments. 'printf' in standard library.
 *
 * @format: the formatted string taken as input to _printf
 *
 * Return: length of formatted string printed
 */
int _printf(const char *format, ...)
{
	int position = 0, count = 0;

	va_list specifiers;

	va_start(specifiers, format);
	while (format[position])
	{
		if (format[position] == '%' && format[position - 1] != '%')
		{
			position++;
			if (format[position] == '%')
			{
				_putchar(format[position]);
				count++;
			}
			else
			{
				switch (format[position])
				{
					case 'd':
					case 'i':
						count += print_dec(va_arg(specifiers, int));
						break;
					case 'c':
						count += print_char(va_arg(specifiers, int));
						break;
					case 's':
						count += print_string(va_arg(specifiers, char *));
						break;
					default:
						print_string("Error! Format specifier not recognized.");
						count++;
						break;
				}
			}
			position++;
			continue;
		}
		_putchar(format[position]);
		count++;
		position++;
	}
va_end(specifiers);
return (count);
}
