#include "main.h"

/**
 * printf_pointer - prints hexadecimal representation of a pointer
 * @par: arguments
 * Return: number of characters printed
 */
int printf_pointer(va_list par) {
  void *b = va_arg(par, void*);

  if (b == NULL) {
    return printf_string(par);
  }

  _putchar('0');
  _putchar('x');
    
  return printf_hex_aux((unsigned long int)b) + 2;
}
