#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int print_char(va_list args);
int print_str(va_list args);
int print_per(va_list args);
int print_int(va_list args);
char *convert(long int num, int base);
int print_bin(va_list args);
int print_unsigned (va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_Hex(va_list args);
int _pow(int x, int y);
int _sqrt(int n);
int _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct fmt - function to check for formats
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct Format
{
	char *type;
	int (*f)(va_list);
} fmt;
#endif
