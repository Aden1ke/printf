#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**                                                * _prints_integer - prints an integer value       * @numb: Number to return
 *
 * Return: (Lengt -1)
 */
int _prints_integer(int numb)                     {
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
							  if (numb == -2147483648)
	{
		lengt += print_string("-2147483648");
		return (lengt);
	}
							  val = num % 10;
	num = num / 10;
	if (num)
		len += _putint(num);
	len += _putchar(val + '0');

	return (len);
}

