#include <stdio.h>
#include "main.h"
#include <stdarg.h>

int main(void)
{
// printf("%ab%%cd", e);

char *str = "%cb%%cd\n";

int count = 0;
int position = 0;

while (str[position])
{
	position++;
		if (str[position - 1] == '%' && str[position - 2] != '%')
			continue;
		count++;
}

// printf("ab%%c%d", e);
position = 0;
int i = 1;
	
	while (str[position])
		{
		if (str[position] == '%' && str[position - 1] != '%')
		{
			position++;
			if (str[position] == '%')
				putchar(str[position]);
			else
			{
				switch (str[position])
				{
					case 'd':
					case 'i':
						print_dec(argv[i]);
						break;
					case 'c':
						print_char(argv[i]);
						break;
					case 's':
						print_string(argv[i]);
						break;
					default:
						print_string("Error! Format specifier not recognized.");
						break;
				}
			}
			i++;
			position++;
					continue;
		}
			putchar(str[position]);
			position++;
		}



return (count);
}
