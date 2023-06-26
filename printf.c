#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - Prints to the standard output like a stardard printf
 * @format: The string to be printed adn its format specifiers
 *  Return: Length of the string
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list my_args;
	va_start(my_args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			count += conversion(my_args, format[i]);
		}
	}
	va_end(my_args);
	return (count);
}
/**
 * conversion - Prints to the standard output like a stardard printf
 * @specifiers: The string to be printed adn its format specifiers
 * @my_args: arguments
 *  Return: Length of the string
 */
int conversion(va_list my_args, char specifiers)
{
	int count = 0;

	switch (specifiers)
	{
		case 'c':
			count += _putchar(va_arg(my_args, int));
                        break;
		case 's':
			count += print_string(va_arg(my_args, char*));
			break;
		case 'b':
			count += print_binary(va_arg(my_args, int));
			break;
<<<<<<< HEAD
		case '%':
			count += _putchar('%');
			break;
=======
		case 'd':
			count += _print_integer(va_arg(numb, int));
			break;
		case 'i':
			count += _print_integer(va_arg(numb, int));
			break;	
>>>>>>> 478870a90cf6c4b27f5ceaf5b6c2c98094674366
		default:
			count += _putchar('%');
			count += _putchar(specifiers);
			break;
	}
	return (count);
}
