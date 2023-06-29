#include "main.h"

/**
 * _prints_plus - Prints a plus sign
 * @numb: Number
 * @value: Format of specifiers
 * Return: (Lengt)
 */
int _prints_plus(int numb, char value)
{
	int lengt = 0;

	if (value == 'd' || value == 'i')
	{
		if (numb > -1)
			lengt += _putchar('+');
		lengt += _prints_integer(num);
	}
	else if (value == 'u')
		lengt += _prints_unsign(numb);

	return (lengt);
}

/**
 * _prints_space - Prints a space
 * @numb: Number
 * @Value: Value of specifiers 
 * Return: (lengt)
 */
int _prints_space(int numb, char value)
{
	int lengt = 0;

	if (value == 'd' || value == 'i')
	{
		if (numb > -1)
			lengt += _putchar(' ');
		lengt += _prints_integer(numb);
	}
	else if (value == 'u')
		lengt += _prints_unsign(numb);
	return (lengt);

}

/**
 * _prints_hash - Prints an hash sign
 * @numb: Number
 * @value: Value of the base of a number 
 * Return: (lengt)
 */
int _prints_hash(unsigned int numb, char value)
{
	int lengt = 0;

	if (value == 'o')
	{
		lengt += _putchar('0');
		lengt += _prints_octal(numb);
	}
	else if (value == 'x')
	{
		lengt += print_string("0x");
		lengt += _prints_hex(numb, 'x');
	}
	else if (value == 'X')
	{
		lengt += print_string("0X");
		lengt += _prints_hex(numb, 'X');
	}

	return (lengt);
}

