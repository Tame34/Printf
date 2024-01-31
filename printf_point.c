#include "main.h"

/**
 * printf_pointer - prints hexadecimal representation of a pointer
 * @par: arguments
 * Return: number of characters printed
 */
int printf_pointer(va_list par) {
  void *p = va_arg(par, void*);

  if (p == NULL) {
    return printf_string("(nil)");
  }

  _putchar('0');
  _putchar('x');
    
  return printf_hex_aux((unsigned long int)p) + 2;
}
