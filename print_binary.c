#include "main.h"
#include "stdio.h"
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
	else
	{
		while (num != 0)
		{
			remainder[i] = num % 2;
			store = num / 2;
			num = store;
			i++;
		}
	}
	for (j = i - 1; j >= 0; j--)
	{
		char digit = remainder[j] + '0';

		_write(1, &digit, 1);
		count++;
	}
	return (count);
}
