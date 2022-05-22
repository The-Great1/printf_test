#include <stdio.h>
#include "main.h"

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

position = 0;
int i = 1;
	
	while (str[position])
		{
		if (str[position] == '%' && str[position - 1] != '%')
		{
			position++;
			if (str[position] == '%')
				putchar(str[position]);
			getfunc(str[position])(argv[i]);
			i++;
			position++;
					continue;
		}
			putchar(str[position]);
			position++;
		}



return (count);
}
