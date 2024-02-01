#include "main.h"

/**
 * printf_char: Prints a char.
 * @par: arguments.
 * Return: 1.
 */
int printf_char(va_list par) {
  _putchar(va_arg(par, int));
  return 1;
}
