#include "main.h"

/**
 * _nospace - Prints hex with no space
 * @numb: Number
 * Return: (Lengt - 1)
 */
int _nospace(int numb)
{
	int lengt;

	if (numb <= 9)
	{
		_putchar('0');
		_putchar(numb + '0');
		return (2);
	}
	if (numb <= 15)
	{
		_putchar('0');
		_putchar(numb + 55);
		return (2);
	}

	lengt = numb % 16;
	numb = numb / 16;

	_prints_hex(numb, 'X');
	_prints_hex(lengt, 'X');

	return (2);
}

/**
 * _prints_nospace - Prints a string with no space
 * @str: String
 *
 * Return: (Length - 1)
 */
int _prints_nospace(char *str)
{
	int i, lengt = 0;

	if (!str)
		return (lengt += print_string("(null)"));
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			lengt += _putchar(92);
			lengt += _putchar('x');
			lengt += _nospace(str[i]);
			continue;
		}
		lengt += _putchar(str[i]);
	}

	return (lengt);
}
