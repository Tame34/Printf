#include "main.h"

/**
 * printf_strrev - prints a string in reverse
 * @pars: variable parameter list
 * Return: Count of characters printed
 */

	
int printf_strrev(va_list pars) {
    char *b = va_arg(pars, char*);
    int length = 0;
      int i;
    

    if (b == NULL)
        b = "(null)";

/**
 * Calculate the length of the string
 **/
    while (b[length] != '\0')
        length++;

    /**
     * Print the string in reverse
     **/
    for (i = length - 1; i >= 0; i--)
_putchar(b[i]);

return length;
    
}
