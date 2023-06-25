#include "main.h"
#include <unistd.h>
int my_putchar(char n)
{
	if (n == '\0')
	{
		return (-1);
	}
	return (write(1, &n, 1));
}
