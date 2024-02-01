#include "main.h"

/**
 * _printf - selects the correct function to print based on the format.
 * @format: format specifier.
 * Return: the length of the printed string.
 */
int m;

int _printf(const char *format, ...) {
  if (format == NULL || format[0] == '\0')
    return -1;

  int len =0;
  int match_found = 0;
  int j = 0;
  
  
  va_list pars;
  va_start(pars, format);

  
  while (*format) {
    if (*format == '%') {
      format++;
   

      for (j = 0; j < sizeof(m) / sizeof(m[0]); j++) {
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
 * Add the conversion specifier structure
 */

  ConversionSpecifier m[] = {

			     {"%s", printf_string}, {"%c", printf_char},
		     {"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_strrev},
		     {"%R", printf_ROT13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		     {"%o", printf_oct}, {"%x", printf_hex}, {"%p", printf_pointer}

};
