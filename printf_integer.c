#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: number of characters printed
 */
int printf_number(int n) {
  int i = 0;

  if (n < 0) {
    _putchar('-');
    n = -n;
    i++;
  }

  if (n / 10 != 0) {
    i += printf_number(n / 10);
  }

  _putchar(n % 10 + '0');
  return (i + 1);
}

/**
 * printf_int - prints integer
 * @pars: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list pars) {
  return printf_number(va_arg(pars, int));
}

/**
 * printf_dec - prints decimal
 * @pars: argument to print
 * Return: number of characters printed
 */
int printf_dec(va_list pars) {
  return printf_number(va_arg(pars, int));
}
