#include "holberton.h"
/**
 * convert2 - converter function, a clone of itoa
 * @num: number
 * @base: base
 * Return: string
 * All credits to Narnat:
 * https://gist.github.com/narnat/95733cd0ad7bfac0d90697292914c407
 */
char *convert2(long int num, int base)
{
        static char *array = "0123456789ABCDEF";
        static char buffer[50];
        char sign = 0;
        char *ptr;
        unsigned long n = num;

        if (num < 0)
        {
                n = -num;
                sign = '-';
        }
        ptr = &buffer[49];
        *ptr = '\0';

        do      {
                *--ptr = array[n % base];
                n /= base;
        } while (n != 0);

        if (sign)
                *--ptr = sign;
        return (ptr);
}
/**
 * _oct - function to print octal
 * @octo: list being passed
 * Return: updated count
 */
int _Hex(va_list args)
{
        int i;
        char *str;

        str = convert2(va_arg(args, int), 16);

        if (str == NULL)
                str = "NULL";

        i = 0;

        while (str[i] != 0)
                i+= _putchar(str[i]);

        return (i);


}
