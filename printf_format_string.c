#include "main.h"
/**
 * printf_string: Format and print a string
 * @par: parameters
 * Return: string length
 **/

int printf_string(va_list par)
{

int i, leng;
const char *b;

b = va_arg(par, const char *);


if (b == NULL)
        b = "(null)";

    leng = printf_strlength(b);
    
    for (i = 0; i < leng; i++)
        _putchar(b[i]);

    return leng;
}
