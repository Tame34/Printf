#include "main.h"

/**
 * printf_hex_aux - prints hexadecimal representation of a number
 * @digit: input number
 * Return: number of characters printed
 */
int printf_hex_aux(unsigned long int digit) {
  
  unsigned long int temp;
  int counter =0;
  temp = digit;

  
  /**
   * Calculate the number of hexadecimal digits required
   */
  

do {
counter++;
temp /= 16;
}
while (temp != 0);

/**
 * Allocate memory for an array to store hexadecimal digits
 */    

 long int *array;

 array = malloc(counter * sizeof(long int));

    if (array == NULL) {
        return 0;

/**
	 * Handle memory allocation failure
	 */

    }

    /**
     * Populate the array with the hexadecimal digits
     */

    int i;

for (i = 0; i < counter; i++) {
        array[i] = digit % 16;
        digit /= 16;
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
 *Return the total count of hexadecimal digits printed
 */
return counter;
}
