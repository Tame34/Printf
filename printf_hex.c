#include "main.h"

/**
 * printf_hex - prints hexadecimal representation of an unsigned integer
 * @par: arguments
 * Return: number of characters printed
 */
int printf_hex(va_list par) {
  unsigned int digit;
  int counter = 0;
  int *array;
  int i;
  unsigned int temp;  
  
  digit= va_arg(par, unsigned int);

  

  /**
   * Calculate the number of hexadecimal digits required
   */
  
  temp = digit;
  while (temp > 0) {
    temp /= 16;
    counter++;
  }

  /**
   * Allocate memory for an array to store hexadecimal digits
   */  

  

array= malloc(counter * sizeof(int));
  if (array == NULL) {
    return 0;

    /**
     *Handle memory allocation failure
     */  
}

  /**
   * Populate the array with the hexadecimal digits
   */

 
temp = digit;
   
  for (i = 0; i < counter; i++) {
    array[i] = temp % 16;
    temp /= 16;
  }

  /**
   * Print the hexadecimal digits in reverse order
   */
  
for (i = counter - 1; i >= 0; i--) {
  char hexDigit;

  hexDigit = (array[i] > 9) ? (char)(array[i] + 'a' - 10) : (char)(array[i] + '0');
    _putchar(hexDigit);
  }

/**
 * Free the allocated memory for the array
 */
 
free(array);

/**
 * Return the total count of hexadecimal digits printed
 */  
return counter;
}
