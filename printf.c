#include "main.h"

/**
 * _printf - selects the correct function to print based on the format.
 * @format: format specifier.
 * Return: the length of the printed string.
 */
int _printf(const char *format, ...) {
  if (format == NULL || format[0] == '\0')
    return -1;

  va_list pars;
  va_start(pars, format);

  int len = 0;

  while (*format) {
    if (*format == '%') {
      format++;
      int match_found = 0;

      for (int j = 0; j < sizeof(m) / sizeof(m[0]); j++) {
	if (format[0] == m[j].id[0] && format[1] == m[j].id[1]) {
	  len += m[j].f(pars);
	  format += 2;
	  match_found = 1;
	  break;
	}
      }

      if (!match_found) {
	_putchar('%');
	len++;
      }
    } else {
      _putchar(*format);
      len++;
    }

    format++;
  }

  va_end(pars);
  return len;
}

/**
 * _putchar - writes a character to stdout.
 * @p: the character to print.
 * Return: 1 on success, -1 on error.
 */
int _putchar(char p) {
  return write(1, &p, 1);
}

// Add the conversion specifier structure
/** ConversionSpecifier m[] = {
		     {"%s", printf_string}, {"%c", printf_char},
		     {"%%", printf_37},
		     {"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		     {"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		     {"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		     {"%S", printf_exclusive_string}, {"%p", printf_pointer}
		     };
*/

// Add other functions here...

