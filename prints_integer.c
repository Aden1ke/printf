#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * printstr - Print a string
 * @str:Strings
 *
 * Return: (Lengt - 1)
 */
int printstr(char *str)
{
	int i;

	i = 0;

	if (str == NULL)
		i = printstr("(null)");
	else
	{
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}

	return (i);
}

/**
 * _prints_integer - prints an integer value
 * @numb: Number to return
 *
 * Return: (Lengt -1)
 */
int _prints_integer(int numb)
{
	int lengt1 = 0;
	int lengt2 = 0;

	if (!numb)
	{
		lengt2 += _putchar('0');
		return (lengt2);
	}
	if (numb <= -1)
	{
		lengt2 += _putchar('-');
		numb = -numb;
	}
	if (numb == _INTMIN)
	{
		lengt2 += printstr("-2147483648");
		return (lengt2);
	}
	lengt1 = numb % 10;
	numb = numb / 10;
	if (numb)
		lengt2 += _prints_integer(numb);
	lengt2 += _putchar(lengt1 + '0');
	return (lengt2);
}
