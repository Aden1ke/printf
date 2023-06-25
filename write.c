#include "main.h"
#include <unistd.h>
/**
 * *_memcpy - a function that copies memory area.
 * @src: pointer to copy(source pointer)
 * @dest: pointer to paste to(destination pointer)
 * @n: size of bytes to copy
 * Return: Always 0.
 */
char *_memcpy(char *dest,const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
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
