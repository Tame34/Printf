#include "main.h"

/**
 * _putchar: prints out a sigle character to standard output (character c)
 * @p: character that should be printed
 * return: 1 for success and -1 for error
 */

int _putchar (char p)
{
  return (write(1, &p, 1));
}
