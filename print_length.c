#include "main.h"
#include <stdio.h>
/**
 * print_length - print long  num
 * @num: number to print
 * Return: Length of lenght
 */
int print_length(long num)
{
	int buffer[20];
	int count = 0, i = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}
	else
	{
		if (num < 0)
		{
			count += _putchar('-');
			num = -num;
		}
		while (num != 0)
		{
			buffer[i] = num % 10;
			num = num / 10;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			count += _putchar(buffer[i] + '0');
		}
	}
	return (count);
}
/**
 * print_height - print a num
 * @num: number to print
 * Return: Length of lenght
 */
int print_height(int num)
{
	int buffer[10];
	int count = 0, i = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}
	else
	{
		while (num != 0)
		{
			buffer[i] = num % 10;
			num = num / 10;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			count += _putchar(buffer[i] + '0');
		}
	}
		return (count);
}
