#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdarg.h>
#include <stddef.h>
int _printf(const char *format, ...);
int print_binary(unsigned int num);
int print_string(char *str);
int _write(int fd, const void *buf, size_t count);
int _strlen(char *s);
int _putchar(char n);
int conversion(va_list my_args, char specifiers);
char *_memcpy(char *dest, const char *src, unsigned int n);
char *rev_string(char *s);
int _prints_integer(int numb);
int print_val_pointer(const void *ptr);
#endif
