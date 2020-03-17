#include "holberton.h"

/**
 * _hex - function to print hex lowercase
 * @args: list being passed
 * Return: updated count
 */
int _hex(va_list args)
{
        int i;
        char *str;

        str = convert(va_arg(args, int), 16);

        if (str == NULL)
                str = "NULL";

        i = 0;

        while (str[i] != 0)
                i+= _putchar(str[i]);

        return (i);


}

