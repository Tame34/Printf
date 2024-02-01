#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @par: arguments.
 * Return: number of characters printed.
 */
int printf_bin(va_list par) {
  unsigned int num = va_arg(par, unsigned int);
  int cont = 0;

  int startPrinting = 0;

  /**
   * Flag to start printing binary digits
   **/
  
  int i;
  for ( i = 31; i >= 0; i--) {
    int bit = (num >> i) & 1;

    if (bit || startPrinting) {
      _putchar(bit + '0');
      cont++;
      startPrinting = 1;
    }
  }

  /**
   * If no binary digit was printed, print '0'
   **/  
if (cont == 0) {
    _putchar('0');
    cont++;
  }

  return cont;
}
