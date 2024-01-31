#include "main.h"

/**
 * printf_hex - prints hexadecimal representation of an unsigned integer
 * @par: arguments
 * Return: number of characters printed
 */
int printf_hex(va_list par) {
  unsigned int digit = va_arg(val, unsigned int);
  int counter = 0;

  // Calculate the number of hexadecimal digits required
  unsigned int temp = digit;
  while (temp > 0) {
    temp /= 16;
    counter++;
  }

  // Allocate memory for an array to store hexadecimal digits
  int *array = malloc(counter * sizeof(int));
  if (array == NULL) {
    return 0; // Handle memory allocation failure
  }

  // Populate the array with the hexadecimal digits
  temp = digit;
  int i;
  
  for (int i = 0; i < counter; i++) {
    array[i] = temp % 16;
    temp /= 16;
  }

  // Print the hexadecimal digits in reverse order
  for (int i = counter - 1; i >= 0; i--) {
    char hexDigit = (array[i] > 9) ? (char)(array[i] + 'a' - 10) : (char)(array[i] + '0');
    _putchar(hexDigit);
  }

  // Free the allocated memory for the array
  free(array);

  // Return the total count of hexadecimal digits printed
  return counter;
}
