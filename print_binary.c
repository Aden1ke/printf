#include "main.h"
#include "stdio.h"
int print_negative_binary(int num);
/**
 * print_binary - print an arrayof binary num
 * @num: number to convert to binary num
 * Return: Length of lenght
 */
int print_binary(int num)
{
	int remainder[32];
	int store;
	int i = 0, j;
	int count = 0;

	if (num == 0)
	{
		printf("0");
	}
	else if (num > 0)
	{
		while (num != 0)
		{
			remainder[i] = num % 2;
			store = num / 2;
			num = store;
			i++;
		}
	}
	else
	{
		print_negative_binary(num);
	}
	for (j = i - 1; j >= 0; j--)
	{
		char digit = remainder[j] + '0';

		_putchar(digit);
		count++;
	}
	return (count);
}
/**
 * print_negative_binary - print an arrayof binary num
 * @num: number to convert to binary num
 * Return: Length of lenght
 */
int print_negative_binary(int num)
{
	int remainder[32];
	int store;
	int i = 0, j;
	int count;

	num = -num;
	while (num != 0)
	{
		remainder[i] = num % 2;
		store = num / 2;
		num = store;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (remainder[j] == 0)
		{
			remainder[j] = 1;
		}
		else
		{
			remainder[j] = 0;
		}
	}
	remainder[i + 1] = 1;
	for (j = i - 1; j >= 0; j--)
	{
		char digit = remainder[j] + '0';

		_putchar(digit);
		count++;
	}
	return (count);
}
