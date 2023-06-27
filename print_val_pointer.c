#include "main.h"
#include <stdio.h>
/**
 * print_val_pointer - print address of value stored in pointer
 * @ptr: address stored in pointer.
 * Return: Length of lenght
 */
int print_val_pointer(const void *ptr)
{
	int i, count = 0;
	char buffer[20];

	sprintf(buffer, "%p", ptr);
	for (i = 0; buffer[i]; i++)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}
