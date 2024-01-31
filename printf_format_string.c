#include "main.h"
/**
 * printf_string: Format and print a string
 * @par: parameters
 * Return: string length
 **/

int printf_string(va_list par)
{

int i, leng;
char *b;

b = va_arg(par, char *);


if (b == NULL)
        b = "(null)";

    leng = _strlen(b);
    
    for (i = 0; i < leng; i++)
        _putchar(b[i]);

    return leng;
}
