#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
/**
 * *_memcpy - a function that copies memory area.
 * @src: pointer to copy(source pointer)
 * @dest: pointer to paste to(destination pointer)
 * @n: size of bytes to copy
 * Return: Always 0.
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * _write - prints arguments passed to it
 * @fd: The file descriptor on which the data should be written
 * @buf: A pointer to the buffer that contains the data to be written.
 * @count: The number of bytes to be written from the buffer.
 * Return: bytes_written:amount of bytes printed.
 */
int _write(int fd, const void *buf, size_t count)
{
	ssize_t bytes_written;
	static char buffer[1024];

	_memcpy(buffer, buf, count);
	write(fd, buffer, count);
	bytes_written = write(fd, buffer, count);

	if (bytes_written == -1)
	{
		return (-1);
	}
	return (bytes_written);
}
/**
 * _strlen - a function that returns the length of a string.
 *@s: pointer to a string.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
