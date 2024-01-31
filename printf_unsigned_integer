#include "main.h"

/**
 * printf_unsigned: Prints unsigned integer
 * @pars: Parameter to print
 * Return: Count of characters printed
 */
 
int printf_unsigned(va_list pars)

{
    unsigned int k = va_arg(pars, unsigned int);
    int i = 0;

    if (k == 0) {
        _putchar('0');
        return 1;
    }

    while (k > 0) {
        _putchar(k % 10 + '0');
        k /= 10;
        i++;
    }

    return i;
}
