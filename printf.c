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
	char flag;
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
			if (format[i] == '+' || format[i] == ' ' || format[i] == '#')
			{
				flag = format[i];
				i++;
				count += _flag_handler(my_args, flag, format[i]);
			}
			else if (format[i] == 'l')
			{
				count += length_modifiers(my_args, format, &i);
			}
			else if (format[i] == 'h')
			{
				count += height_modifiers(my_args, format, &i);
			}
			else
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

	if (specifiers == 'c')
		count += _putchar(va_arg(my_args, int));
	else if (specifiers == 's')
		count += print_string(va_arg(my_args, char *));
	else if (specifiers == 'b')
		count += print_binary(va_arg(my_args, int));
	else if (specifiers == '%')
		count += _putchar('%');
	else if (specifiers == 'd' || specifiers == 'i')
		count += _prints_integer(va_arg(my_args, int));
	else if (specifiers == 'p')
		count += print_val_pointer(va_arg(my_args, void *));
	else if (specifiers == 'u')
		count += _prints_unsign(va_arg(my_args, int));
	else if (specifiers == 'o')
		count += _prints_octal(va_arg(my_args, int));
	else if (specifiers == 'x' || specifiers == 'X')
		count += _prints_hex(va_arg(my_args, int), specifiers);
	else if (specifiers == 'S')
		count += _prints_nospace(va_arg(my_args, char *));
	else
	{
		count += _putchar('%');
		count += _putchar(specifiers);
	}
	return (count);
}
int length_modifiers(va_list my_args, const char *format, int *i)
{
	int count = 0;

	(*i)++;
	switch(format[(*i)])
	{
		case 'u':
			count += print_length(va_arg(my_args, unsigned long));
			break;
		case 'i':
		case 'd':
			count += print_length(va_arg(my_args, long));
			break;
		case 'o':
			count += print_length(va_arg(my_args, unsigned long));
			break;
		case 'x':
		case 'X':
			count += print_length(va_arg(my_args, unsigned long));
			break;
		default:
			count += _putchar('%');
			count += _putchar(format[(*i)]);
		break;
	}
	return (count);
}
int height_modifiers(va_list my_args, const char *format, int *i)
{
	int count = 0;

	(*i)++;
	switch(format[(*i)])
	{
		case 'u':
			count += print_height(va_arg(my_args,unsigned int));
			break;
		case 'i':
		case 'd':
			count += print_height(va_arg(my_args, int));
			break;
		case 'o':
			count += print_height(va_arg(my_args, unsigned int));
			break;
		case 'x':
		case 'X':
			count += print_height(va_arg(my_args, unsigned int));
			break;
		default:
			count += _putchar('%');
			count += _putchar(format[(*i)]);
			break;
	}
	return (count);
}
