#include "main.h"
/**
 * print_string - Prints a string
 * @str: The string to be printed
 * Return: Length of string printed - 1
 */
int print_string(char *str)
{
	int i, len;

	if (str == NULL)
	{
		str = "(nil)";
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	return (len);
}
