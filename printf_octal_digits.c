#include "main.h"

/**
 * printf_oct: Prints octal representation of an unsigned integer
 * @par: Arguments
 * Return: Count of characters printed
 */
int printf_oct(va_list par) {
  unsigned int digit;
  int counter = 0;
  int *array;
  int i;
  unsigned int temp;
  
  digit= va_arg(par, unsigned int);

  /**
   * Calculate the number of octal digits required
   **/
  
 
  
 temp  = digit;
  while (temp > 0) {
    temp /= 8;
    counter++;
  }

  /**
   * Allocate memory for an array to store octal digits
   **/
  
   array= malloc(counter * sizeof(int));
  if (array == NULL) {
    return 0;

    /**
     * Handle memory allocation failure
     **/  
}

  /**
   * Populate the array with the octal digits
   **/

  
temp = digit;
 for (i = 0; i < counter; i++) {
    array[i] = temp % 8;
    temp /= 8;
  }

 /**
  * Print the octal digits in reverse order
  */


for (i = counter - 1; i >= 0; i--) {
    _putchar(array[i] + '0');
  }

/**
 * Free the allocated memory for the array
 */  
free(array);

/**
 * Return the total count¢ of octal digits printed
 */  
return counter;
}
