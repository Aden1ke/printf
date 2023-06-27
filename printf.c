#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - Prints to the standard output like a stardard printf
 * @format: string to be printed
 * Return: Length of string
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list my_args;

	va_start(my_args, format);
	if (!format)
	{
		return (-1);
	}
	while (format[i])
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else
		{
			i++;
			if (!format[i])
			{
				return (-1);
			}
			count += conversion(my_args, format[i]);
		}
		i++;
	}
	va_end(my_args);
	return (count);
}
/**
 * conversion - reads the specifiers
 * @my_args: List of arguments
 * @specifiers: conversion of arguments
 * Return: length of argument
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
			count += print_string(va_arg(my_args, char *));
			break;
		case 'b':
			count += print_binary(va_arg(my_args, int));
			break;
		case '%':
			count += _putchar('%');
			break;
		case 'd':
			count += _prints_integer(va_arg(my_args, int));
			break;
		case 'i':
			count += _prints_integer(va_arg(my_args, int));
			break;
		case 'p':
			count += print_val_pointer(va_arg(my_args, void *));
			break;
		case 'u':
                        count += _prints_unsign(va_arg(my_args, int));
			break;
		case 'o':
			count += _prints_octal(va_arg(my_args, int));
			break;
		case 'x':
		case 'X':
			count += _prints_hex(va_arg(my_args, int), specifiers);
			break;
		default:
			count += _putchar('%');
			count += _putchar(specifiers);
			break;
	}
	return (count);
}
