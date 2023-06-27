#include "main.h"

/**
 * _prints_nospace - Prints no space
 * @str: String
 *
 * Return: (Lengt - 1)
 */
int _prints_nospace(char *str)
{
	int i, lengt = 0;

	if (!str)
		return (lengt += _putstr("(null)"));
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			lengt += _putchar(92);
			lengt += _putchar('x');
			lengt += _prints_hex(str[i]);
			continue;
		}
		lengt += _putchar(str[i]);
	}

	return (lengt);
}
