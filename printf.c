#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	int len = strlen(format);
	int i = 0, count = 0;
	va_list my_args;
	va_start(my_args, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] != '%')
		{
			my_putchar(format[i]);
		}
		else
		{
			++i;
			count += conversion(my_args, format[i]);
		}
	}
	my_putchar('\n');
	va_end(my_args);
	return (count);
}
int conversion(va_list my_args, char specifiers)
{
	int count = 0;

	switch (specifiers)
	{
		case 'c':
			count += my_putchar(va_arg(my_args, int));
                        break;
		case 's':
			count += print_string(va_arg(my_args, char*));
			break;
		case 'b':
			count += print_binary(va_arg(my_args, int));
			break;
		default:
			count += my_putchar('%');
			count += my_putchar(specifiers);
			break;
	}
	return (count);
}
