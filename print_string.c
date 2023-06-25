#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
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
			my_putchar(str[i]);
		}
	}
	return (len);
}
