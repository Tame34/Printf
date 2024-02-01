#ifndef MAIN_H_
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct format: defines a conversion specifier and its corresponding function
 * @id: character pointer representing the specifier (e.g., 'l', 'h')
 * @f: function pointer for the conversion specifier
 */
typedef struct format {
  char *id;
  int (*f)(va_list);

  /**
   *Function takes no arguments
   */
  
} 
ConversionSpecifier;


int printf_strlength(const char *b);
int printf_strlen_constant(const char *b);
int _putchar (char p);
int printf_ROT13(va_list pars);
int printf_string(va_list par);
int printf_strrev(va_list pars);
int printf_pointer(va_list par);
int printf_hex_aux(unsigned long int digit);
int printf_hex(va_list par);
int printf_oct(va_list par);
int print_number(int n);
int printf_int(va_list pars);
int printf_dec(va_list pars);
int printf_char(va_list par);
int printf_bin(va_list par);
int printf_unsigned(va_list pars);
int _printf(const char *format, ...);


#endif
