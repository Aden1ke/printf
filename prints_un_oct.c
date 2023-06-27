#include "main.h"

/**
 * _prints_unsigned - prints unsigned number
 * @numb: Number
 *
 * Return: (Lengt - 1)
 */
int _prints_unsigned(unsigned int numb)
{
	int lengt1 = 0;
	unsigned int lengt2;

	if (numb == NULL)
	{
		lengt1 += _putchar('0');
		return (lengt1);
	}
	lengt2 = numb % 10;
	numb = numb / 10;
	if (numb)
		lengt1 += _prints_integer(numb);
	lengt1 += _putchar(lengt2 + '0');

	return (lengt1);
}


/**
 * _prints_octal - Prints an octal number
 * @numb: Number
 *
 * Return: (Lengt - 1)
 */
int _prints_octal(unsigned int numb)
{
	int lengt1 = 0;
	unsigned int lengt2;

	if (numb < 8)
	{
		lengt1 += _prints_integer(numb);
		return (lengt1);
	}
	lengt2 = numb % 8;
	numb = numb / 8;
	if (numb)
		lengt1 += _prints_octal(numb);
	lengt1 += _putchar(lengt2 + '0');

	return (lengt1);
}


/**
 * _prints_hex - Prints an hex number
 * @numb: Number
 * @value: Value
 * Return: (Lengt - 1)
 */
int _prints_hex(unsigned int numb, char value)
{
	int lengt1 = 0;
	unsigned int lengt2;

	if (numb <= 9)
		return (_putchar(numb + '0'));
	if (numb <= 15)
	{
		if (value == 'x')
			return (_putchar(numb + 87));
		return (_putchar(numb + 55));
	}
	lengt2 = numb % 16;
	numb = numb / 16;
	if (numb)
		lengt1 += _prints_hex(numb, value);
	lengt1 += _prints_hex(lengt2, value);

	return (lengt1);
}

