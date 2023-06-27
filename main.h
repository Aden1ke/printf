#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

#define _INT_MIN (-2147483648)

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
int _prints_unsign(unsigned int num);
int _prints_octal(unsigned int num);
int _prints_hex(unsigned int numb, char value);
int _prints_nospace(char *str);
int _nospace(int numb);
int print_length(long num);
int print_height(short num);
#endif
