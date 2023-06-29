#include "main.h"

/**
 * _flag_handler - Handles flag specifiers 
 * @my_args: Variadic arguments 
 * @Value1: Value of specifier
 * @Value2: Base of numbers 
 * Return: (Lengt)
 */

int _flag_handler(va_list my_args, char value1, char value2)
{
	int lengt = 0;

	if (value1 == '+')
		lengt += _prints_plus(va_arg(my_args, int), value2);
	else if (value1 == ' ')

		lengt += _prints_space(va_arg(my_args, int), value2);
	else if (value1 == '#')
		lengt += _prints_hash(va_arg(my_args, unsigned int), value2);

	return (lengt);
}
