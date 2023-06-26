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
			count += print_string(va_arg(my_args, char*));
			break;
		case 'b':
			count += print_binary(va_arg(my_args, int));
			break;
		case '%':
			count += _putchar('%');
			break;
		default:
			count += _putchar('%');
			count += _putchar(specifiers);
			break;
	}
	return (count);
}
int main(void)
{
	int len = 0;
	int len2 = 0;

	len = _printf("A %s sentence\n", "simple");
	len2 = printf("A %s sentence\n", "simple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple %5 entence\n");
	len2 = printf("A simple %5 entence\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("Percentage: %%\n");
	len2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("NULL: %c, %s\n", NULL, NULL);
	len2 = printf("NULL: %c, %s\n", NULL, NULL);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%");
	len2 = printf("%");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple sentence%");
	len2 = printf("\nA simple sentence%");
	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	return (0);
}
